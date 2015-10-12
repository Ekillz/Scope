/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emammadz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/12 12:23:29 by emammadz          #+#    #+#             */
/*   Updated: 2015/10/12 15:54:47 by emammadz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(void)
{
	GLFWwindow* window;
	int			width = WIDTH;
	int			height = HEIGHT;

	if (!glfwInit())
		exit(-1);
	window = glfwCreateWindow(HEIGHT, WIDTH, "Scop", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		exit(-2);
	}
	glfwSetErrorCallback(error_callback);
	glfwSetKeyCallback(window, key_callback);
	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);
	glfwGetFramebufferSize(window, &width, &height);
	glViewport(0, 0, width, height);
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}
	glfwDestroyWindow(window);
	glfwTerminate();
	return (0);
}
