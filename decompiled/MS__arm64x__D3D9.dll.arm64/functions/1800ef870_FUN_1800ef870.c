/*
 * FUN_1800ef870 at 1800ef870
 * undefined FUN_1800ef870(void)
 * Address ranges: 1800ef870-1800ef8f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ef870(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_18023bfd8;
  param_1[8] = &PTR_D3DPERF_GetStatus_18023bfa8;
  FUN_1800f1380(param_1[10],param_1,0,1);
  if (param_1[9] != 0) {
    FUN_1800f1570(param_1[10],param_1[9],1);
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  param_1[8] = &PTR_D3DPERF_GetStatus_18023bf20;
  *param_1 = &PTR_FUN_18023bfe8;
  return;
}

