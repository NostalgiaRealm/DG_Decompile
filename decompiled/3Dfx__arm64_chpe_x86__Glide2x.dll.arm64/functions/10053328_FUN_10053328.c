/*
 * FUN_10053328 at 10053328
 * undefined FUN_10053328(void)
 * Address ranges: 10053328-10053457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10053328(undefined4 param_1,int param_2,undefined4 param_3,int param_4,char param_5)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort local_40 [8];
  
  uVar4 = 0;
  iVar3 = 0xe8;
  if (param_5 == '\0') {
    iVar3 = 0xb0;
  }
  puVar1 = (ushort *)(iVar3 + param_4 * 0xe + param_2);
  local_40[0] = *puVar1;
  local_40[1] = puVar1[1];
  local_40[2] = puVar1[2];
  local_40[3] = puVar1[3];
  do {
    uVar2 = local_40[uVar4] & 0xf0;
    if (uVar2 != 0x40 && (uVar2 - 0x10 & 0xffcf) == 0) {
      uVar2 = local_40[uVar4] & 0xf;
      iVar3 = param_2 + uVar2 * 4;
      if (((*(int *)(iVar3 + 0x6c) == 0) && (*(int *)(iVar3 + 0x78) == 0)) &&
         (*(int *)(iVar3 + 0x84) == 0)) {
        iVar3 = uVar2 + param_2;
        FUN_1004c5f8(param_1,uVar2,param_2,param_3,*(char *)(iVar3 + 0xa8) != -1,
                     *(char *)(iVar3 + 0xab) != -1,*(char *)(iVar3 + 0xa5) != -1);
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  return;
}

