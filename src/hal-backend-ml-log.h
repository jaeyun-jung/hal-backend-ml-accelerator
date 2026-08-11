/* SPDX-License-Identifier: Apache-2.0 */

#ifndef __HAL_BACKEND_ML_LOG_H__
#define __HAL_BACKEND_ML_LOG_H__

#include <dlog.h>

#ifdef __cplusplus
extern "C" {
#endif

#define LOG_TAG "HAL_BACKEND_ML"

#define ml_log_e(fmt, ...) dlog_print (DLOG_ERROR, LOG_TAG, fmt, ##__VA_ARGS__)
#define ml_log_w(fmt, ...) dlog_print (DLOG_WARN, LOG_TAG, fmt, ##__VA_ARGS__)
#define ml_log_i(fmt, ...) dlog_print (DLOG_INFO, LOG_TAG, fmt, ##__VA_ARGS__)

#ifdef __cplusplus
}
#endif

#endif /* __HAL_BACKEND_ML_LOG_H__ */
