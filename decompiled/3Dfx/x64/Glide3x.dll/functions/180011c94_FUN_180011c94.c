/*
 * FUN_180011c94 at 180011c94
 * uint * __fastcall FUN_180011c94(longlong param_1, uint * param_2, longlong param_3)
 * Address ranges: 180011c94-180011dae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180011c94(longlong param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_res8;
  uint local_resc;
  uint local_res10;
  uint local_res14;
  
  *param_2 = *(uint *)(param_1 + 0xb0);
  param_2[1] = *(uint *)(param_1 + 0xb4);
  param_2[2] = *(uint *)(param_1 + 0xb8);
  param_2[3] = *(uint *)(param_1 + 0xbc);
  param_2[4] = *(uint *)(param_1 + 0xc4);
  uVar1 = *(uint *)(param_3 + 0x3b);
  param_2[5] = *(uint *)(param_1 + 200);
  uVar2 = *(uint *)(param_3 + 0x37);
  if ((uVar2 < 0xfffffff8) || (((uVar2 != uVar1 || (uVar2 == 0xfffffff9)) && (0xff < uVar1)))) {
    if (uVar2 == 0) {
      uVar2 = *(uint *)(param_1 + 0xa8);
    }
    *param_2 = uVar2;
    if (uVar1 == 0) {
      uVar1 = *(uint *)(param_1 + 0xac);
    }
    param_2[1] = uVar1;
  }
  else {
    if (*(int *)(param_3 + 8) == 0) {
      uVar1 = FUN_1800140b4(*(longlong *)(param_1 + 0x3300));
    }
    else {
      uVar1 = *(int *)(param_3 + 8) - 1;
    }
    FUN_18000af7c(param_1,&local_res8,uVar1,param_3);
    FUN_18000afd0(param_1,&local_res10,(ulonglong)uVar1,&local_res8,param_3);
    *param_2 = local_res8;
    param_2[1] = local_resc;
    param_2[2] = local_res10;
    param_2[3] = local_res14;
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

