/*
 * FUN_1800572ec at 1800572ec
 * undefined __fastcall FUN_1800572ec(longlong param_1, longlong param_2, longlong * param_3, longlong * param_4, int param_5)
 * Address ranges: 1800572ec-1800573da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1800572ec(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,int param_5
                  )

{
  longlong lVar1;
  int iVar2;
  undefined4 local_res8 [8];
  longlong local_68 [4];
  undefined4 local_48;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    local_68[3] = (**(code **)(*param_4 + 0x58))(param_4);
    local_48 = 1;
    local_res8[0] = 2;
    local_68[3] = (ulonglong)(uint)((param_5 + (int)param_3[5] * 2) * 4) + local_68[3];
    FUN_1800e492c(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1508),1,local_68 + 3,local_res8);
    if ((*(byte *)((ulonglong)*(uint *)(param_3 + 1) * 0x20 + 0x14 + *param_3) & 1) != 0) {
      lVar1 = param_3[5];
      local_68[0] = 0;
      local_68[1] = 0;
      local_68[2] = 0;
      iVar2 = (**(code **)(*param_4 + 0x40))(param_4,0,local_68 + 1,local_68);
      if (-1 < iVar2) {
        *(undefined4 *)((ulonglong)(uint)((param_5 + (int)lVar1 * 2) * 4) + local_68[0]) = 0;
        (**(code **)(*param_4 + 0x48))(param_4,0,local_68 + 1);
      }
    }
    *(longlong **)(param_2 + 0x40) = param_4;
    *(int *)(param_2 + 0x48) = param_5;
    *(longlong **)(param_2 + 0x38) = param_3;
  }
  return;
}

