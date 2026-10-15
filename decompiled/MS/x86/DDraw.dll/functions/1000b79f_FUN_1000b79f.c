/*
 * FUN_1000b79f at 1000b79f
 * int __fastcall FUN_1000b79f(int * param_1)
 * Address ranges: 1000b79f-1000b84b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1000b79f(int *param_1)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  uVar4 = 0;
  uVar5 = 0;
  if (param_1[9] != 0) {
    do {
      iVar3 = param_1[0x31];
      if (((iVar3 != 0) || (iVar3 = param_1[0x18], iVar3 != 0)) &&
         (BVar2 = IsRectEmpty((RECT *)(param_1[0xb] * uVar4 * 0x1c + iVar3 + 0xc)), BVar2 == 0)) {
        uVar5 = uVar5 | 1 << (uVar4 & 0x1f);
      }
      local_8 = 0;
      if (param_1[8] != 0) {
        do {
          cVar1 = (**(code **)(*param_1 + 4))(local_8,uVar4,1);
          if (cVar1 != '\0') {
            uVar5 = uVar5 | 1 << (uVar4 & 0x1f);
          }
          local_8 = local_8 + 1;
        } while (local_8 < (uint)param_1[8]);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[9]);
  }
  iVar3 = param_1[0x30];
  if (iVar3 == 0) {
    iVar3 = param_1[0x17];
  }
  if (uVar5 != 0) {
    FUN_1000be03(param_1,(int)(param_1 + 0x12),0,uVar5,param_1[0xb]);
  }
  return iVar3;
}

