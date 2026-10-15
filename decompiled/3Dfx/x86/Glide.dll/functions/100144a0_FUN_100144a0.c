/*
 * FUN_100144a0 at 100144a0
 * undefined __thiscall FUN_100144a0(void * this, int param_1, uint param_2, uint param_3, uint param_4, uint param_5, char param_6)
 * Address ranges: 100144a0-10014670
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100144a0(void *this,int param_1,uint param_2,uint param_3,uint param_4,uint param_5,char param_6
            )

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint local_c0 [36];
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  void *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  char local_5;
  
  local_10 = *(int *)((int)this + 0xc) + param_1 * 0x41;
  local_1c = this;
  uVar4 = FUN_10014e74(param_2,param_3,param_4,param_5);
  if ((char)uVar4 != '\0') {
    local_c = 0;
    local_14 = -1;
    FUN_10050561((int *)local_c0,0,0x90);
    uVar5 = FUN_10014e46(param_3);
    iVar10 = 8 - uVar5;
    local_18 = iVar10;
    local_2c = FUN_10014e46(param_2);
    if ((int)local_2c <= (int)uVar5) {
      local_30 = param_1 * 0x4e8;
      local_5 = *(char *)(local_10 + 0x191);
      local_24 = (uint)*(byte *)(local_10 + 400);
      do {
        if (local_5 == '\0') {
switchD_1001455b_default:
          iVar6 = 0;
        }
        else {
          switch(*(undefined4 *)(&DAT_100515d4 + uVar5 * 4)) {
          case 1:
            iVar6 = 1;
            break;
          case 2:
            iVar6 = 2;
            break;
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
            iVar6 = 3;
            break;
          default:
            goto switchD_1001455b_default;
          }
        }
        iVar6 = *(int *)(local_10 + 0x170 + iVar6 * 4);
        local_20 = iVar10 * 0x10;
        uVar7 = *(int *)(local_30 + 0x2a0 + *(int *)((int)local_1c + 0xc)) + iVar6;
        if (iVar6 == local_14) {
          uVar7 = uVar7 + local_c;
        }
        else {
          local_c = 0;
          local_14 = iVar6;
        }
        local_c0[iVar10 * 4] = uVar7;
        local_28 = *(uint *)(&DAT_100515d4 + uVar5 * 4);
        uVar8 = FUN_10014e13(local_28,param_4);
        local_c0[iVar10 * 4 + 1] = uVar8 >> 0x10;
        uVar2 = local_24;
        uVar7 = local_28;
        if (param_5 < 0x11) {
          uVar9 = (uint)(byte)(&DAT_1005354c)[param_5];
        }
        else {
          uVar9 = 0;
        }
        uVar9 = (uVar8 >> 0x10) * uVar9;
        local_c0[iVar10 * 4 + 3] = uVar9;
        *(uint *)((int)local_c0 + local_20 + 8) = uVar8 & 0xffff;
        bVar3 = FUN_10014e56(uVar7,uVar2);
        if (bVar3) {
          iVar10 = (uVar8 & 0xffff) * uVar9;
        }
        else {
          iVar10 = 0;
        }
        local_c = local_c + iVar10;
        iVar10 = local_18 + 1;
        uVar5 = uVar5 - 1;
        local_18 = iVar10;
      } while ((int)local_2c <= (int)uVar5);
    }
    if (param_6 != '\0') {
      piVar1 = *(int **)((int)local_1c + 0xc);
      uVar5 = (uint)*(byte *)(local_10 + 400);
      puVar11 = local_c0;
      uVar7 = FUN_10014e46(param_2);
      iVar10 = 8 - uVar7;
      uVar7 = FUN_10014e46(param_3);
      (**(code **)(*piVar1 + 300))(param_1,param_5,8 - uVar7,iVar10,puVar11,uVar5);
    }
  }
  return;
}

