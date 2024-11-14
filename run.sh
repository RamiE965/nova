#!/bin/bash

cmake .
cmake --build .

# Export the token from .env
export $(cat .env | xargs)

# Run the bot
./NOVA