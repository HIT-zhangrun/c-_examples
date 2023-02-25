function check_ret() {
    if [ $? -ne 0 ]; then
    echo -e "\033[31m BUILD FAILED! \033[0m"
    exit
fi
}

SHELL_FOLDER=$(cd "$(dirname "$0")";pwd)

# echo $SHELL_FOLDER

if [ ! -d "../build" ]; then
        mkdir ../build
fi

cd ../build
BUILD_FOLDER=${pwd}

cmake $SHELL_FOLDER

check_ret

make

check_ret

echo -e "\033[32m BUILD SUCCESS! \n \033[0m"

./my_project

exit