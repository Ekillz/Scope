/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emammadz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/12 12:25:55 by emammadz          #+#    #+#             */
/*   Updated: 2015/10/12 15:54:54 by emammadz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include "glfw/include/GLFW/glfw3.h"
#include <stdlib.h>
#include <unistd.h>

#define WIDTH	500
#define HEIGHT	500

void ft_putstr_fd(char const *s, int fd);
void error_callback(int error, const char* description);
void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);

#endif
