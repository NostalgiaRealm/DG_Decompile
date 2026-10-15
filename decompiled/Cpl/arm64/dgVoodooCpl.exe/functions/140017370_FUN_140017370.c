/*
 * FUN_140017370 at 140017370
 * undefined8 __cdecl FUN_140017370(longlong param_1, ulonglong param_2, ulonglong param_3, uint param_4, uint * param_5)
 * Address ranges: 140017370-1400173fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_140017370(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  char *local_20 [2];
  
  local_20[0] = (char *)0x0;
  uVar1 = FUN_140024d40((byte *)(*(longlong *)(param_1 + 0x70) +
                                (ulonglong)
                                *(uint *)(*(longlong *)
                                           (*(longlong *)
                                             (*(longlong *)(param_1 + 0x90) +
                                              (param_2 & 0xffffffff) * 0x18 + 8) +
                                            (param_3 & 0xffffffff) * 0x28 + 0x18) +
                                          (ulonglong)param_4 * 8 + 4)),local_20,0);
  if ((*local_20[0] == '\0') && ((((int)uVar1 >> 0x1f) + 1U & 0xfffffffe) == 0)) {
    *param_5 = uVar1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

