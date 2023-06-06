#pragma once

#include <gui/view.h>
#include "uart_validators.h"

#ifdef __cplusplus
extern "C" {
#endif

/** Text input anonymous structure */
typedef struct UART_TextInput UART_TextInput;
typedef void (*UART_TextInputCallback)(void* context);
typedef bool (*UART_TextInputValidatorCallback)(const char* text, FuriString* error, void* context);

/** Allocate and initialize text input 
 * 
 * This text input is used to enter string
 *
 * @return     UART_TextInput instance
 */
UART_TextInput* uart_text_input_alloc();

/** Deinitialize and free text input
 *
<<<<<<<< HEAD:applications/external/esp32cam_morseflasher/uart_text_input.h
 * @param      uart_text_input  UART_TextInput instance
 */
void uart_text_input_free(UART_TextInput* uart_text_input);

/** Clean text input view Note: this function does not free memory
 *
 * @param      uart_text_input  Text input instance
 */
void uart_text_input_reset(UART_TextInput* uart_text_input);

/** Get text input view
 *
 * @param      uart_text_input  UART_TextInput instance
 *
 * @return     View instance that can be used for embedding
 */
View* uart_text_input_get_view(UART_TextInput* uart_text_input);

/** Set text input result callback
 *
 * @param      uart_text_input          UART_TextInput instance
========
 * @param      text_input  WIFI_TextInput instance
 */
void wifi_text_input_free(WIFI_TextInput* text_input);

/** Clean text input view Note: this function does not free memory
 *
 * @param      text_input  Text input instance
 */
void wifi_text_input_reset(WIFI_TextInput* text_input);

/** Get text input view
 *
 * @param      text_input  WIFI_TextInput instance
 *
 * @return     View instance that can be used for embedding
 */
View* wifi_text_input_get_view(WIFI_TextInput* text_input);

/** Set text input result callback
 *
 * @param      text_input          WIFI_TextInput instance
>>>>>>>> 6b6fe16fed0533ac7f28d9c141db26086b167de8:applications/external/wifi_marauder_companion/wifi_marauder_text_input.h
 * @param      callback            callback fn
 * @param      callback_context    callback context
 * @param      text_buffer         pointer to YOUR text buffer, that we going
 *                                 to modify
 * @param      text_buffer_size    YOUR text buffer size in bytes. Max string
 *                                 length will be text_buffer_size-1.
 * @param      clear_default_text  clear text from text_buffer on first OK
 *                                 event
 */
<<<<<<<< HEAD:applications/external/esp32cam_morseflasher/uart_text_input.h
void uart_text_input_set_result_callback(
    UART_TextInput* uart_text_input,
    UART_TextInputCallback callback,
========
void wifi_text_input_set_result_callback(
    WIFI_TextInput* text_input,
    WIFI_TextInputCallback callback,
>>>>>>>> 6b6fe16fed0533ac7f28d9c141db26086b167de8:applications/external/wifi_marauder_companion/wifi_marauder_text_input.h
    void* callback_context,
    char* text_buffer,
    size_t text_buffer_size,
    bool clear_default_text);

<<<<<<<< HEAD:applications/external/esp32cam_morseflasher/uart_text_input.h
void uart_text_input_set_validator(
    UART_TextInput* uart_text_input,
    UART_TextInputValidatorCallback callback,
    void* callback_context);

UART_TextInputValidatorCallback
    uart_text_input_get_validator_callback(UART_TextInput* uart_text_input);

void* uart_text_input_get_validator_callback_context(UART_TextInput* uart_text_input);

/** Set text input header text
 *
 * @param      uart_text_input  UART_TextInput instance
 * @param      text        text to be shown
 */
void uart_text_input_set_header_text(UART_TextInput* uart_text_input, const char* text);
========
void wifi_text_input_set_validator(
    WIFI_TextInput* text_input,
    WIFI_TextInputValidatorCallback callback,
    void* callback_context);

void wifi_text_input_set_minimum_length(WIFI_TextInput* text_input, size_t minimum_length);

WIFI_TextInputValidatorCallback wifi_text_input_get_validator_callback(WIFI_TextInput* text_input);

void* wifi_text_input_get_validator_callback_context(WIFI_TextInput* text_input);

/** Set text input header text
 *
 * @param      text_input  WIFI_TextInput instance
 * @param      text        text to be shown
 */
void wifi_text_input_set_header_text(WIFI_TextInput* text_input, const char* text);
>>>>>>>> 6b6fe16fed0533ac7f28d9c141db26086b167de8:applications/external/wifi_marauder_companion/wifi_marauder_text_input.h

#ifdef __cplusplus
}
#endif