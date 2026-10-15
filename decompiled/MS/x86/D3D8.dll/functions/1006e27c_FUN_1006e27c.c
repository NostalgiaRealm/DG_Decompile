/*
 * FUN_1006e27c at 1006e27c
 * int __fastcall FUN_1006e27c(int * param_1)
 * Address ranges: 1006e27c-1006e324
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1006e27c(int *param_1)

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
      iVar3 = param_1[0x41];
      if (((iVar3 != 0) || (iVar3 = param_1[0x17], iVar3 != 0)) &&
         (BVar2 = IsRectEmpty((RECT *)(iVar3 + 0x10 + param_1[0xb] * uVar4 * 0x20)), BVar2 == 0)) {
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
  iVar3 = param_1[0x42];
  if (iVar3 == -1) {
    iVar3 = param_1[0x18];
  }
  if (uVar5 != 0) {
    FUN_1006cc6f(param_1,(int)(param_1 + 0x12),uVar5,param_1[0x18],0,0);
  }
  return iVar3;
}

