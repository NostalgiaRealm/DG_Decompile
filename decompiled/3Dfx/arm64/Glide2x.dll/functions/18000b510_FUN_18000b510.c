/*
 * FUN_18000b510 at 18000b510
 * undefined8 __cdecl FUN_18000b510(longlong param_1, ulonglong param_2, ulonglong param_3, uint param_4, uint * param_5)
 * Address ranges: 18000b510-18000b597
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18000b510(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  char *local_20 [2];
  
  local_20[0] = (char *)0x0;
  uVar1 = FUN_18005fd48((byte *)(*(longlong *)(param_1 + 0x70) +
                                (ulonglong)
                                *(uint *)(*(longlong *)
                                           (*(longlong *)
                                             (*(longlong *)(param_1 + 0x90) +
                                              (param_2 & 0xffffffff) * 0x18 + 8) +
                                            (param_3 & 0xffffffff) * 0x28 + 8) +
                                         (ulonglong)param_4 * 4)),local_20,0);
  if ((*local_20[0] == '\0') && ((((int)uVar1 >> 0x1f) + 1U & 0xfffffffe) == 0)) {
    *param_5 = uVar1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

