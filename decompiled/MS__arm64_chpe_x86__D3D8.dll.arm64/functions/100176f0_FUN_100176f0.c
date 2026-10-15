/*
 * FUN_100176f0 at 100176f0
 * undefined FUN_100176f0(void)
 * Address ranges: 100176f0-100177ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100176f0(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = param_1[0xb];
  puVar1 = (uint *)&DAT_00000b0c;
  if (iVar4 != 0) {
    puVar1 = (uint *)(iVar4 + -0x4dd4);
  }
  if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar3 = true;
    iVar4 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar4 == 0) {
      FUN_10006560(0);
    }
  }
  iVar2 = param_1[0xb];
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = iVar2 + -0x58e0;
  }
  FUN_1000c550(iVar4,param_1);
  FUN_100177f0(param_1);
  *param_1 = &PTR_thunk_FUN_100fffb0_10129448;
  FUN_100179c0(param_1 + 8);
  FUN_100fec90(param_1,0x4c);
  if (bVar3) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return;
}

