/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _STATUS_H
#define _STATUS_H

#include <stdio.h>
#include <time.h>
#include <inttypes.h>

double get_avg_exec_time (hc_device_param_t *device_param, const int last_num_entries);

// should be static after refactoring
void format_timer_display (struct tm *tm, char *buf, size_t len);
void format_speed_display (double val, char *buf, size_t len);

int     status_get_device_info_cnt            (const hashcat_ctx_t *hashcat_ctx);
int     status_get_device_info_active         (const hashcat_ctx_t *hashcat_ctx);
bool    status_get_skipped_dev                (const hashcat_ctx_t *hashcat_ctx, const int device_id);
char   *status_get_session                    (const hashcat_ctx_t *hashcat_ctx);
char   *status_get_status_string              (const hashcat_ctx_t *hashcat_ctx);
int     status_get_status_number              (const hashcat_ctx_t *hashcat_ctx);
int     status_get_input_mode                 (const hashcat_ctx_t *hashcat_ctx);
char   *status_get_input_base                 (const hashcat_ctx_t *hashcat_ctx);
int     status_get_input_base_offset          (const hashcat_ctx_t *hashcat_ctx);
int     status_get_input_base_count           (const hashcat_ctx_t *hashcat_ctx);
double  status_get_input_base_percent         (const hashcat_ctx_t *hashcat_ctx);
char   *status_get_input_mod                  (const hashcat_ctx_t *hashcat_ctx);
int     status_get_input_mod_offset           (const hashcat_ctx_t *hashcat_ctx);
int     status_get_input_mod_count            (const hashcat_ctx_t *hashcat_ctx);
double  status_get_input_mod_percent          (const hashcat_ctx_t *hashcat_ctx);
char   *status_get_input_charset              (const hashcat_ctx_t *hashcat_ctx);
int     status_get_input_mask_length          (const hashcat_ctx_t *hashcat_ctx);
char   *status_get_input_candidates_dev       (const hashcat_ctx_t *hashcat_ctx, const int device_id);
char   *status_get_hash_type                  (const hashcat_ctx_t *hashcat_ctx);
char   *status_get_hash_target                (const hashcat_ctx_t *hashcat_ctx);
int     status_get_digests_done               (const hashcat_ctx_t *hashcat_ctx);
int     status_get_digests_cnt                (const hashcat_ctx_t *hashcat_ctx);
double  status_get_digests_percent            (const hashcat_ctx_t *hashcat_ctx);
int     status_get_salts_done                 (const hashcat_ctx_t *hashcat_ctx);
int     status_get_salts_cnt                  (const hashcat_ctx_t *hashcat_ctx);
double  status_get_salts_percent              (const hashcat_ctx_t *hashcat_ctx);
double  status_get_msec_running               (const hashcat_ctx_t *hashcat_ctx);
double  status_get_msec_paused                (const hashcat_ctx_t *hashcat_ctx);
double  status_get_msec_real                  (const hashcat_ctx_t *hashcat_ctx);
char   *status_get_time_started_absolute      (const hashcat_ctx_t *hashcat_ctx);
char   *status_get_time_started_relative      (const hashcat_ctx_t *hashcat_ctx);
char   *status_get_time_estimated_absolute    (const hashcat_ctx_t *hashcat_ctx);
char   *status_get_time_estimated_relative    (const hashcat_ctx_t *hashcat_ctx);
u64     status_get_restore_point              (const hashcat_ctx_t *hashcat_ctx);
u64     status_get_restore_total              (const hashcat_ctx_t *hashcat_ctx);
double  status_get_restore_percent            (const hashcat_ctx_t *hashcat_ctx);
int     status_get_progress_mode              (const hashcat_ctx_t *hashcat_ctx);
double  status_get_progress_finished_percent  (const hashcat_ctx_t *hashcat_ctx);
u64     status_get_progress_done              (const hashcat_ctx_t *hashcat_ctx);
u64     status_get_progress_rejected          (const hashcat_ctx_t *hashcat_ctx);
double  status_get_progress_rejected_percent  (const hashcat_ctx_t *hashcat_ctx);
u64     status_get_progress_restored          (const hashcat_ctx_t *hashcat_ctx);
u64     status_get_progress_cur               (const hashcat_ctx_t *hashcat_ctx);
u64     status_get_progress_end               (const hashcat_ctx_t *hashcat_ctx);
u64     status_get_progress_ignore            (const hashcat_ctx_t *hashcat_ctx);
u64     status_get_progress_skip              (const hashcat_ctx_t *hashcat_ctx);
u64     status_get_progress_cur_relative_skip (const hashcat_ctx_t *hashcat_ctx);
u64     status_get_progress_end_relative_skip (const hashcat_ctx_t *hashcat_ctx);
double  status_get_hashes_msec_all            (const hashcat_ctx_t *hashcat_ctx);
double  status_get_hashes_msec_dev            (const hashcat_ctx_t *hashcat_ctx, const int device_id);
double  status_get_hashes_msec_dev_benchmark  (const hashcat_ctx_t *hashcat_ctx, const int device_id);
double  status_get_exec_msec_all              (const hashcat_ctx_t *hashcat_ctx);
double  status_get_exec_msec_dev              (const hashcat_ctx_t *hashcat_ctx, const int device_id);
char   *status_get_speed_sec_all              (const hashcat_ctx_t *hashcat_ctx);
char   *status_get_speed_sec_dev              (const hashcat_ctx_t *hashcat_ctx, const int device_id);
int     status_get_cpt_cur_min                (const hashcat_ctx_t *hashcat_ctx);
int     status_get_cpt_cur_hour               (const hashcat_ctx_t *hashcat_ctx);
int     status_get_cpt_cur_day                (const hashcat_ctx_t *hashcat_ctx);
int     status_get_cpt_avg_min                (const hashcat_ctx_t *hashcat_ctx);
int     status_get_cpt_avg_hour               (const hashcat_ctx_t *hashcat_ctx);
int     status_get_cpt_avg_day                (const hashcat_ctx_t *hashcat_ctx);
char   *status_get_cpt                        (const hashcat_ctx_t *hashcat_ctx);
char   *status_get_hwmon_dev                  (const hashcat_ctx_t *hashcat_ctx, const int device_id);
int     status_get_corespeed_dev              (const hashcat_ctx_t *hashcat_ctx, const int device_id);
int     status_get_memoryspeed_dev            (const hashcat_ctx_t *hashcat_ctx, const int device_id);

int     status_progress_init                  (hashcat_ctx_t *hashcat_ctx);
void    status_progress_destroy               (hashcat_ctx_t *hashcat_ctx);
void    status_progress_reset                 (hashcat_ctx_t *hashcat_ctx);

int     status_ctx_init                       (hashcat_ctx_t *hashcat_ctx);
void    status_ctx_destroy                    (hashcat_ctx_t *hashcat_ctx);

#endif // _STATUS_H
