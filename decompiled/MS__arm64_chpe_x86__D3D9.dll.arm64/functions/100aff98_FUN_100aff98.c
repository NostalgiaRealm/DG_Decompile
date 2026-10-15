/*
 * FUN_100aff98 at 100aff98
 * undefined FUN_100aff98(void)
 * Address ranges: 100aff98-100b0197
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100aff98(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_100aa510(*(undefined4 *)(param_1 + 0xa8),2,*(undefined4 *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0xc0) == 0) {
    FUN_100af740(param_1,0);
  }
  fVar3 = (float)(uint)(1 << (ulonglong)(param_2 & 0x1f));
  iVar2 = *(int *)(param_1 + 0x1c);
  FUN_100aa8c0(0,0,(float)*(uint *)(param_1 + 0x14) / fVar3,(float)*(uint *)(param_1 + 0x18) / fVar3
               ,0,0,(float)*(uint *)(param_1 + 0xdc) / fVar3,
               (float)*(uint *)(param_1 + 0xe0) / fVar3,*(undefined4 *)(param_1 + 0xa8),iVar2,iVar2,
               param_2,param_3,param_2,param_3,*(undefined4 *)(param_1 + 0xf4),
               *(undefined4 *)(*(int *)(param_1 + 0x100) + (param_2 + iVar1 * param_3) * 0x1c));
  return;
}

