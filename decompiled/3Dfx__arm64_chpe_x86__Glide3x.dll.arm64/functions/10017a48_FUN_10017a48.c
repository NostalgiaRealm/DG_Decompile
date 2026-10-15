/*
 * FUN_10017a48 at 10017a48
 * undefined FUN_10017a48(void)
 * Address ranges: 10017a48-10017c03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_10017a48(int param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  
  puVar1 = param_2 + 1;
  *param_2 = *(uint *)(param_1 + 0xa0);
  uVar4 = *(uint *)(param_3 + 0x37);
  *puVar1 = *(uint *)(param_1 + 0xa4);
  param_2[2] = *(uint *)(param_1 + 0xa8);
  param_2[3] = *(uint *)(param_1 + 0xac);
  param_2[4] = *(uint *)(param_1 + 0xb4);
  param_2[5] = *(uint *)(param_1 + 0xb8);
  uVar3 = *(uint *)(param_3 + 0x3b);
  if ((uVar4 < 0xfffffff8) || ((uVar4 != uVar3 || uVar4 == 0xfffffff9) && 0xff < uVar3)) {
    if (uVar4 == 0) {
      uVar4 = *(uint *)(param_1 + 0x98);
    }
    *param_2 = uVar4;
    if (uVar3 == 0) {
      uVar3 = *(uint *)(param_1 + 0x9c);
    }
    *puVar1 = uVar3;
  }
  else {
    if (*(int *)(param_3 + 8) == 0) {
      iVar2 = FUN_1001bb88(*(undefined4 *)(param_1 + 0x32dc));
    }
    else {
      iVar2 = *(int *)(param_3 + 8) + -1;
    }
    FUN_1000f0c0(param_1,&local_58,iVar2,param_3);
    FUN_1000f318(param_1,&local_50,iVar2,&local_58,param_3);
    *param_2 = local_58;
    *puVar1 = uStack_54;
    param_2[2] = local_50;
    param_2[3] = uStack_4c;
  }
  if (((*(char *)(param_3 + 0x22) == '\0') || (uVar4 = *(uint *)(param_3 + 0x43), uVar4 == 0)) ||
     (uVar3 = *(uint *)(param_3 + 0x47), uVar3 == 0)) {
    uVar4 = *(uint *)(param_1 + 0xb0);
    uVar3 = 1;
  }
  param_2[4] = uVar4;
  param_2[5] = uVar3;
  return param_2;
}

