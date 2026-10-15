/*
 * FUN_10006ec8 at 10006ec8
 * undefined __thiscall FUN_10006ec8(void * this, int param_1, int param_2, int param_3, int param_4, uint param_5, char param_6)
 * Address ranges: 10006ec8-10007086
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10006ec8(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5,char param_6)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined3 extraout_var;
  int extraout_EDX;
  int iVar8;
  int local_ec [48];
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  void *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = *(int *)((int)this + 0xc) + param_1 * 0x9d;
  local_1c = this;
  uVar4 = FUN_1000439e(this,param_2,param_3,param_4,param_5);
  if ((char)uVar4 != '\0') {
    local_8 = 0;
    local_14 = -1;
    FUN_100561f1(local_ec,0,0xc0);
    local_2c = 0xb - param_3;
    local_c = local_2c;
    if (param_2 <= param_3) {
      local_28 = param_1 * 0x4e8;
      cVar1 = *(char *)(local_10 + 0x28e);
      local_20 = (uint)*(byte *)(local_10 + 0x28d);
      iVar8 = param_3;
      do {
        if (cVar1 == '\0') {
switchD_10006f9a_default:
          iVar5 = 0;
          goto LAB_10006fa3;
        }
        if (param_3 < 9) {
code_r0x10006f93:
          switch(iVar8) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
switchD_10006f9a_caseD_0:
            iVar5 = 3;
            break;
          case 6:
switchD_10006f9a_caseD_6:
            iVar5 = 2;
            break;
          case 7:
            goto switchD_10006f9a_caseD_7;
          default:
            goto switchD_10006f9a_default;
          }
        }
        else {
          if (((iVar8 == 6) || (iVar8 == 7)) || (iVar8 == 8)) goto switchD_10006f9a_caseD_0;
          if (iVar8 == 9) goto switchD_10006f9a_caseD_6;
          if (iVar8 != 10) goto code_r0x10006f93;
switchD_10006f9a_caseD_7:
          iVar5 = 1;
        }
LAB_10006fa3:
        iVar5 = *(int *)(local_10 + 0x26d + iVar5 * 4);
        local_18 = local_c * 0x10;
        iVar6 = *(int *)(local_28 + 0x458 + *(int *)((int)local_1c + 0xc)) + iVar5;
        if (iVar5 == local_14) {
          iVar6 = iVar6 + local_8;
        }
        else {
          local_8 = 0;
          local_14 = iVar5;
        }
        local_ec[local_c * 4] = iVar6;
        uVar7 = FUN_1000435d(iVar8,param_4);
        *(uint *)((int)local_ec + local_18 + 4) = uVar7 >> 0x10;
        uVar2 = FUN_100054be(param_5);
        iVar5 = local_18;
        uVar4 = local_20;
        iVar6 = CONCAT31(extraout_var,uVar2) * extraout_EDX;
        *(uint *)((int)local_ec + local_18 + 8) = uVar7 & 0xffff;
        local_24 = iVar6;
        *(int *)((int)local_ec + iVar5 + 0xc) = iVar6;
        bVar3 = FUN_10004385((byte)iVar8,uVar4);
        if (bVar3) {
          iVar5 = (uVar7 & 0xffff) * local_24;
        }
        else {
          iVar5 = 0;
        }
        local_8 = local_8 + iVar5;
        local_c = local_c + 1;
        iVar8 = iVar8 + -1;
      } while (param_2 <= iVar8);
    }
    if (param_6 != '\0') {
      (**(code **)(**(int **)((int)local_1c + 0xc) + 0x140))
                (param_1,param_5,local_2c,0xb - param_2,local_ec,*(undefined1 *)(local_10 + 0x28d));
    }
  }
  return;
}

