package main

import (
	"C"
	"fmt"
)

//export SayHello
func SayHello(name string) {
	fmt.Printf("Hi %s!\n", name)
}

//export SayBye
func SayBye() {
	fmt.Println("Bye!")
}

func main() {}
