/****************************************************************************
 * myapp/Tibo/tibo_main.c
 *
 *   Copyright (C) 2008, 2011-2012 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include <stdio.h>

/****************************************************************************
 * Definitions
 ****************************************************************************/

/****************************************************************************
 * Private Data
 ****************************************************************************/
my_ioctl = null;


/****************************************************************************
 * Public Data
 ****************************************************************************/




/****************************************************************************
 * Private Functions
 ****************************************************************************/
static int pwm_open(struct file *filep);
static int pwm_close(struct file *filep);
static ssize_t pwm_read(struct file *filep, char *buffer, size_t buflen);
static ssize_t pwm_write(struct file *filep, const char *buffer, size_t buflen);
static int pwm_start(struct pwm_upperhalf_s *upper, unsigned int oflags);
//static int pwm_ioctl(struct file *filep, int cmd, unsigned long arg); 



/****************************************************************************
 * Public Fonctions
 ****************************************************************************/
static void initialize( (int)(ioctl)(struct file *filep, int cmd, unsigned long arg))
{

  my_PWMIOC_START = mock_PWMIOC_START; //fonction de démarrage du PWM
  #define my_SETCARACTERISTIQUE mock_SETCARACTERISTIQUE //fonction pour définir le PWM
  #define 
}
/****************************************************************************
 * hello_main
 ****************************************************************************/

#ifdef CONFIG_BUILD_KERNEL
int main(int argc, FAR char *argv[])
{
  printf("Hello, World!!\n");
  return 0;
}
#else
#error "Application needs CONFIG_BUILD_KERNEL"
#endif

