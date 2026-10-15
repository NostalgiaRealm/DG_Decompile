/*
 * FUN_1800d8968 at 1800d8968
 * undefined FUN_1800d8968(void)
 * Address ranges: 1800d8968-1800d89ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800d8968(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4,undefined4 *param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  char *local_20 [2];
  
  local_20[0] = (char *)0x0;
  uVar1 = FUN_180103220(*(longlong *)(param_1 + 0x70) +
                        (ulonglong)
                        *(uint *)(*(longlong *)
                                   (*(longlong *)
                                     (*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18
                                     + 8) + (param_3 & 0xffffffff) * 0x28 + 8) +
                                 (ulonglong)param_4 * 4),local_20,0);
  if ((*local_20[0] == '\0') && ((1 - ((uint)(uVar1 >> 0x1f) & 1) & 0xfffffffe) == 0)) {
    *param_5 = (int)uVar1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

