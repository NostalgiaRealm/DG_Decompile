/*
 * FUN_10006a60 at 10006a60
 * undefined __thiscall FUN_10006a60(void * this, int param_1, int param_2, int param_3, int param_4, uint param_5, char param_6)
 * Address ranges: 10006a60-10006bfc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10006a60(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5,char param_6)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_b8 [36];
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  void *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = *(int *)((int)this + 0xc) + param_1 * 0x55;
  local_18 = this;
  uVar4 = FUN_1000419c(param_2,param_3,param_4,param_5);
  if ((char)uVar4 != '\0') {
    iVar8 = 0;
    local_14 = -1;
    local_8 = 0;
    FUN_10052de1((int *)local_b8,0,0x90);
    local_28 = 8 - param_3;
    local_c = local_28;
    if (param_2 <= param_3) {
      local_1c = param_1 * 0x4e8;
      cVar1 = *(char *)(local_10 + 0x1e3);
      local_24 = (uint)*(byte *)(local_10 + 0x1e2);
      do {
        iVar2 = local_c;
        if (cVar1 == '\0') {
switchD_10006afc_default:
          iVar5 = 0;
        }
        else {
          switch(param_3) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
            iVar5 = 3;
            break;
          case 6:
            iVar5 = 2;
            break;
          case 7:
            iVar5 = 1;
            break;
          default:
            goto switchD_10006afc_default;
          }
        }
        iVar5 = *(int *)(local_10 + 0x1c2 + iVar5 * 4);
        local_20 = local_c * 0x10;
        uVar4 = *(int *)(local_1c + 0x31c + *(int *)((int)local_18 + 0xc)) + iVar5;
        if (iVar5 == local_14) {
          uVar4 = uVar4 + iVar8;
        }
        else {
          local_8 = 0;
          local_14 = iVar5;
        }
        local_b8[local_c * 4] = uVar4;
        uVar6 = FUN_1000415b(param_3,param_4);
        local_b8[iVar2 * 4 + 1] = uVar6 >> 0x10;
        uVar4 = local_24;
        if (param_5 < 0x11) {
          uVar7 = (uint)(byte)(&DAT_100555d8)[param_5];
        }
        else {
          uVar7 = 0;
        }
        uVar7 = (uVar6 >> 0x10) * uVar7;
        local_b8[iVar2 * 4 + 3] = uVar7;
        *(uint *)((int)local_b8 + local_20 + 8) = uVar6 & 0xffff;
        bVar3 = FUN_10004183((byte)param_3,uVar4);
        if (bVar3) {
          iVar8 = (uVar6 & 0xffff) * uVar7;
        }
        else {
          iVar8 = 0;
        }
        iVar8 = local_8 + iVar8;
        local_c = local_c + 1;
        param_3 = param_3 + -1;
        local_8 = iVar8;
      } while (param_2 <= param_3);
    }
    if (param_6 != '\0') {
      (**(code **)(**(int **)((int)local_18 + 0xc) + 0x14c))
                (param_1,param_5,local_28,8 - param_2,local_b8,*(undefined1 *)(local_10 + 0x1e2));
    }
  }
  return;
}

