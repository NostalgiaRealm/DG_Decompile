/*
 * FUN_10062160 at 10062160
 * undefined FUN_10062160(void)
 * Address ranges: 10062160-1006220f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_10062160(ulonglong param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int local_30 [4];
  
  uVar5 = 1;
  if (param_3 == -1) {
    uVar1 = *(uint *)(param_2 + 0xc);
    uVar6 = 0;
    if (uVar1 != 0) {
      local_30[0] = -1;
      do {
        if (uVar6 < *(uint *)(param_2 + 0xc)) {
          iVar4 = *(int *)(param_2 + 8) + uVar6 * 0x28 + 0x10;
        }
        else {
          iVar4 = 8;
        }
        param_1 = FUN_10062060(param_1,iVar4,1);
        uVar6 = uVar6 + 1;
        uVar5 = param_1 & 0xff;
      } while (uVar6 < uVar1);
    }
  }
  else {
    local_30[0] = param_3;
    uVar3 = FUN_10063290(param_2 + 4,local_30);
    if ((int)uVar3 != 0) {
      bVar2 = FUN_10062060(uVar3,uVar3 & 0xffffffff,1);
      uVar5 = (ulonglong)bVar2;
    }
  }
  return uVar5 & 0xffffffff;
}

