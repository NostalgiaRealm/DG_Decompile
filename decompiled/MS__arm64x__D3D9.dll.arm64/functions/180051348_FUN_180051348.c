/*
 * FUN_180051348 at 180051348
 * undefined FUN_180051348(void)
 * Address ranges: 180051348-18005144f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_180051348(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,int param_5
                  )

{
  longlong lVar1;
  int iVar2;
  undefined4 local_60 [2];
  longlong local_58 [4];
  undefined4 local_38;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    local_58[3] = (**(code **)(*param_4 + 0x58))(param_4);
    local_58[3] = local_58[3] + (ulonglong)(uint)((param_5 + (int)param_3[5] * 2) * 4);
    local_38 = 1;
    local_60[0] = 2;
    FUN_1800eb130(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1508),1,local_58 + 3,local_60);
    if ((*(uint *)(*param_3 + (ulonglong)*(uint *)(param_3 + 1) * 0x20 + 0x14) & 1) != 0) {
      lVar1 = param_3[5];
      local_58[0] = 0;
      local_58[1] = 0;
      local_58[2] = 0;
      iVar2 = (**(code **)(*param_4 + 0x40))(param_4,0,local_58 + 1,local_58);
      if (-1 < iVar2) {
        *(undefined4 *)(local_58[0] + (ulonglong)(uint)((param_5 + (int)lVar1 * 2) * 4)) = 0;
        (**(code **)(*param_4 + 0x48))(param_4,0,local_58 + 1);
      }
    }
    *(longlong **)(param_2 + 0x40) = param_4;
    *(int *)(param_2 + 0x48) = param_5;
    *(longlong **)(param_2 + 0x38) = param_3;
  }
  return;
}

