/*
 * FUN_18009bbd4 at 18009bbd4
 * undefined1 * __fastcall FUN_18009bbd4(longlong param_1, int param_2, int param_3, undefined8 param_4)
 * Address ranges: 18009bbd4-18009bdbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_18009bbd4(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  BOOL BVar9;
  undefined4 extraout_var_00;
  undefined7 extraout_var;
  undefined4 extraout_var_01;
  ulonglong uVar10;
  ulonglong uVar11;
  uint local_res8 [2];
  int local_res10;
  int local_res18;
  undefined8 in_stack_ffffffffffffff58;
  undefined8 in_stack_ffffffffffffff78;
  uint local_68 [2];
  uint *local_60;
  int local_58 [4];
  uint local_48;
  undefined4 local_44;
  
  if (*(longlong *)(param_1 + 0xd4) != 0) {
    bVar8 = 1;
    uVar11 = (ulonglong)(uint)(param_3 * *(int *)(param_1 + 0x3c) + param_2) * 0x20;
    local_res10 = param_2;
    local_res18 = param_3;
    BVar9 = IsRectEmpty((RECT *)(*(longlong *)(param_1 + 0xd4) + 0x10 + uVar11));
    uVar10 = CONCAT44(extraout_var_00,BVar9);
    if (BVar9 == 0) {
      if ((*(int *)(param_1 + 0x2c) - 0x24U & 0xfffffffa) == 0) {
        local_60 = (uint *)0x0;
        local_res8[0] = 0;
        bVar6 = FUN_18009c104(param_1,param_2,param_3,(longlong *)&local_60,local_res8,local_68);
        puVar5 = local_60;
        uVar4 = local_res8[0];
        uVar10 = CONCAT71(extraout_var,bVar6);
        if (bVar6) {
          iVar1 = *(int *)(param_1 + 0x3c);
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1508);
          bVar8 = (byte)param_2 & 0x1f;
          local_58[0] = 0;
          local_58[1] = 0;
          local_58[2] = 0;
          iVar2 = *(int *)(param_1 + 0x34);
          local_58[3] = *(uint *)(param_1 + 0x24) >> bVar8;
          if (*(uint *)(param_1 + 0x24) >> bVar8 == 0) {
            local_58[3] = 1;
          }
          bVar8 = (byte)param_2 & 0x1f;
          local_44 = 1;
          local_48 = *(uint *)(param_1 + 0x28) >> bVar8;
          if (*(uint *)(param_1 + 0x28) >> bVar8 == 0) {
            local_48 = 1;
          }
          bVar7 = FUN_18009c2bc(param_1,lVar3,*(longlong **)(param_1 + 0x74),
                                iVar1 * param_3 + param_2,
                                (longlong *)(*(longlong *)(param_1 + 0x58) + 0x16d0),local_58,
                                local_60,local_res8[0],in_stack_ffffffffffffff78,0);
          bVar8 = FUN_18009c2bc(param_1,lVar3,*(longlong **)(param_1 + 0x74),
                                (iVar2 + param_3) * iVar1 + param_2,
                                (longlong *)(*(longlong *)(param_1 + 0x58) + 0x16d0),local_58,puVar5
                                ,uVar4,in_stack_ffffffffffffff78,1);
          bVar8 = bVar8 & bVar7;
          FUN_18009c25c(param_1,local_res10,local_res18);
          BVar9 = SetRectEmpty((LPRECT)((uVar11 | 0x10) + *(longlong *)(param_1 + 0xd4)));
          uVar10 = CONCAT44(extraout_var_01,BVar9);
        }
      }
      else {
        uVar10 = FUN_18009b92c(param_1,(uint *)(param_1 + 0x60),param_1 + 0xb0,param_4,
                               in_stack_ffffffffffffff58,param_2,param_3,
                               (RECT *)((uVar11 | 0x10) + *(longlong *)(param_1 + 0xd4)));
        bVar8 = (byte)uVar10;
      }
    }
    register0x00000020 = (BADSPACEBASE *)CONCAT71((int7)(uVar10 >> 8),bVar8);
  }
  return (undefined1 *)register0x00000020;
}

