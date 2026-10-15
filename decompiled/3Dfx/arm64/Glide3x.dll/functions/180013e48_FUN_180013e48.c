/*
 * FUN_180013e48 at 180013e48
 * uint * __cdecl FUN_180013e48(longlong param_1, uint * param_2, longlong param_3)
 * Address ranges: 180013e48-180013f43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180013e48(longlong param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  
  uVar1 = *(uint *)(param_1 + 0xb4);
  *param_2 = *(uint *)(param_1 + 0xb0);
  param_2[1] = uVar1;
  uVar1 = *(uint *)(param_1 + 0xbc);
  param_2[2] = *(uint *)(param_1 + 0xb8);
  param_2[3] = uVar1;
  uVar1 = *(uint *)(param_1 + 200);
  param_2[4] = *(uint *)(param_1 + 0xc4);
  param_2[5] = uVar1;
  uVar1 = *(uint *)(param_3 + 0x37);
  uVar2 = *(uint *)(param_3 + 0x3b);
  if ((uVar1 < 0xfffffff8) || ((uVar1 != uVar2 || uVar1 == 0xfffffff9) && 0xff < uVar2)) {
    if (uVar1 == 0) {
      uVar1 = *(uint *)(param_1 + 0xa8);
    }
    *param_2 = uVar1;
    if (uVar2 == 0) {
      uVar2 = *(uint *)(param_1 + 0xac);
    }
    param_2[1] = uVar2;
  }
  else {
    if (*(int *)(param_3 + 8) == 0) {
      uVar1 = FUN_1800169f0(*(longlong *)(param_1 + 0x3300));
    }
    else {
      uVar1 = *(int *)(param_3 + 8) - 1;
    }
    FUN_18000d5c0(param_1,&local_30,uVar1,param_3);
    FUN_18000d838(param_1,&local_28,uVar1,&local_30,param_3);
    *param_2 = local_30;
    param_2[1] = uStack_2c;
    param_2[2] = local_28;
    param_2[3] = uStack_24;
  }
  if (((*(char *)(param_3 + 0x22) == '\0') || (uVar1 = *(uint *)(param_3 + 0x43), uVar1 == 0)) ||
     (uVar2 = *(uint *)(param_3 + 0x47), uVar2 == 0)) {
    uVar1 = *(uint *)(param_1 + 0xc0);
    uVar2 = 1;
  }
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  return param_2;
}

