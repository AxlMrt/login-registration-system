
# Login Registration System

This project is my first with c++. It is a simple System with basic account creation and login functionalities.



## Description
The project is written in C++ and utilizes files to store user information. It provides a command-line interface for managing user accounts.



## Features

- User account creation with usernames and passwords
- Storage of accounts in a text file (`fake_db.txt`)
- User login with credential verification
- Usage of std::hash for credentials hashing


## Run Locally

Clone the project

```bash
  git clone https://github.com/AxlMrt/login-registration-system
```

Go to the project directory

```bash
  cd login-registration-system
```

Compile the code using your C++ compiler

```bash
  g++ -o my_program main.cpp src/Interface.cpp src/Database.cpp
```

Run the program

```bash
  ./my_program
```


## How to use

- Upon launch, you'll be prompted to choose between creating an account or logging into an existing one.
- Follow the instructions to create an account or log in.
- Accounts are stored in the file fake_db.txt.
    
## Contributing

Contributions are welcome! Feel free to open an issue or create a pull request to improve the project.


## License

[MIT](https://choosealicense.com/licenses/mit/)


