/*
 * FUN_1006d0d4 at 1006d0d4
 * byte __thiscall FUN_1006d0d4(void * this, void * param_1, int param_2, int param_3, int param_4, int param_5, int * param_6)
 * Address ranges: 1006d0d4-1006d349
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __thiscall
FUN_1006d0d4(void *this,void *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte extraout_var;
  uint uVar5;
  byte extraout_var_00;
  byte extraout_var_01;
  byte bVar6;
  undefined4 extraout_ECX;
  uint uVar7;
  uint unaff_ESI;
  int iVar8;
  bool bVar9;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int local_28 [9];
  
  bVar6 = 1;
  iVar2 = FUN_1006cfe6(this,*(int **)((int)param_1 + 0xc),param_2,param_3);
  if (iVar2 != -0x7fffbffb) {
    FUN_1006c7e5(this,&local_38,param_2,param_3);
    if (iVar2 < 0) {
      local_40 = 0;
      local_3c = 0;
      iVar2 = FUN_1006dda3(this,param_2,param_3,extraout_ECX,extraout_ECX,&local_40,&local_3c);
      if (iVar2 == 0) {
        uVar7 = param_6[1];
        iVar2 = *param_6;
        if (uVar7 <= (uint)param_6[3]) {
          bVar9 = uVar7 == param_6[3];
          iVar8 = local_28[0];
          do {
            if (bVar9) {
              iVar8 = param_6[2];
            }
            FUN_100adac0((undefined4 *)(uVar7 * param_5 + iVar2 * local_34 + param_4),
                         (undefined4 *)(uVar7 * local_3c + iVar2 * local_34 + local_40),
                         (iVar8 - iVar2) * local_34);
            iVar2 = 0;
            uVar7 = uVar7 + 1;
            bVar9 = uVar7 == param_6[3];
          } while (uVar7 <= (uint)param_6[3]);
        }
        bVar6 = 1;
        FUN_1006dfc9(this,param_2,param_3);
      }
    }
    else {
      (*(code *)**(undefined4 **)this)(param_2,param_3);
      uVar3 = FUN_1006b761(param_1,unaff_ESI);
      if ((char)uVar3 != '\0') {
        FUN_10066c3e(*(void **)((int)this + 0xe0),*(uint *)((int)param_1 + 0xc),unaff_ESI);
        iVar2 = param_6[2];
        iVar8 = *param_6;
        uVar1 = param_6[3];
        uVar5 = param_6[1];
        bVar6 = 1;
        uVar7 = uVar5;
        if (iVar8 != 0) {
          uVar7 = uVar5 + 1;
          iVar4 = iVar2;
          if (uVar1 != uVar5) {
            iVar4 = iStack_30;
          }
          FUN_1006c867(local_28,iVar8,uVar5,iVar4,uVar7,local_38,local_34);
          (**(code **)(**(int **)((int)param_1 + 0xc) + 0x34))
                    (*(int **)((int)param_1 + 0xc),uVar5 * param_5 + local_3c * iVar8 + param_4,
                     param_5,0,unaff_ESI,local_28);
          bVar6 = extraout_var >> 7 ^ 1;
        }
        if (uVar7 < uVar1) {
          uVar5 = uVar1;
          if (iVar2 == iStack_30) {
            uVar5 = uVar1 + 1;
          }
          FUN_1006c867(local_28,0,uVar7,iStack_30,uVar5,local_38,local_34);
          (**(code **)(**(int **)((int)param_1 + 0xc) + 0x34))
                    (*(int **)((int)param_1 + 0xc),uVar7 * param_5 + param_4,param_5,0,unaff_ESI,
                     local_28);
          bVar6 = bVar6 & (extraout_var_00 >> 7 ^ 1);
          uVar7 = uVar1;
          if (iVar2 == iStack_30) {
            uVar7 = uVar1 + 1;
          }
        }
        if (uVar1 == uVar7) {
          FUN_1006c867(local_28,0,uVar7,iVar2,uVar1 + 1,local_38,local_34);
          bVar6 = (byte)local_28;
          (**(code **)(**(int **)((int)param_1 + 0xc) + 0x34))
                    (*(int **)((int)param_1 + 0xc),uVar7 * param_5 + param_4,param_5,0,unaff_ESI);
          bVar6 = (extraout_var_01 >> 7 ^ 1) & bVar6;
        }
      }
    }
  }
  return bVar6;
}

