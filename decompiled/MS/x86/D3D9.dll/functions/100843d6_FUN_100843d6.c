/*
 * FUN_100843d6 at 100843d6
 * int __fastcall FUN_100843d6(int * param_1, undefined4 param_2, undefined4 param_3, char param_4)
 * Address ranges: 100843d6-100844c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_100843d6(int *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  uint uVar6;
  int iVar7;
  uint local_10;
  uint local_c;
  
  uVar6 = 0;
  local_10 = 0;
  uVar3 = 0;
  if (param_1[9] != 0) {
    do {
      iVar5 = param_1[0x41];
      if ((iVar5 != 0) || (iVar5 = param_1[0x17], param_2 = 0, iVar5 != 0)) {
        BVar2 = IsRectEmpty((RECT *)(param_1[0xb] * local_10 * 0x20 + iVar5 + 0x10));
        param_2 = extraout_EDX;
        if (BVar2 == 0) {
          uVar6 = uVar6 | 1 << (local_10 & 0x1f);
        }
      }
      local_c = 0;
      if (param_1[8] != 0) {
        do {
          cVar1 = (**(code **)(*param_1 + 4))(local_c,local_10,1);
          if (cVar1 != '\0') {
            uVar6 = uVar6 | 1 << (local_10 & 0x1f);
          }
          local_c = local_c + 1;
          param_2 = extraout_EDX_00;
        } while (local_c < (uint)param_1[8]);
      }
      uVar3 = param_1[9];
      local_10 = local_10 + 1;
    } while (local_10 < uVar3);
  }
  iVar5 = param_1[0x42];
  if (param_4 == '\0') {
    if (iVar5 == -1) {
      iVar5 = param_1[0x18];
    }
  }
  else {
    if (iVar5 == -1) {
      iVar7 = 0x6c;
      iVar4 = 0;
      iVar5 = 0x48;
    }
    else {
      iVar4 = param_1[0x15];
      iVar7 = 0x114;
      iVar5 = 0xf0;
    }
    FUN_10081cd7((void *)(iVar5 + (int)param_1),CONCAT31((int3)((uint)param_2 >> 8),uVar3 != 1),
                 iVar4);
    iVar5 = *(int *)(iVar7 + (int)param_1);
  }
  if (uVar6 != 0) {
    FUN_10082e1b(param_1,(int)(param_1 + 0x12),uVar6,param_1[0x18],0,0);
  }
  return iVar5;
}

