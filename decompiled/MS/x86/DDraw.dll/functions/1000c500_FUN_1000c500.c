/*
 * FUN_1000c500 at 1000c500
 * undefined __thiscall FUN_1000c500(void * this, undefined4 param_1, undefined4 param_2, int * param_3, undefined4 param_4, uint * param_5, int param_6, int param_7)
 * Address ranges: 1000c500-1000c73c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000c500(void *this,undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            uint *param_5,int param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_94 [16];
  uint local_84 [7];
  int local_68;
  int local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  void *local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  iVar2 = *(int *)((int)this + 0xa8);
  local_34 = this;
  if (*(char *)(iVar2 + 0xcfd8) != '\0') {
    (**(code **)(*param_3 + 0x28))(param_3,local_94);
    local_14 = FUN_1000a3c5((void *)(iVar2 + 0xcfc8),local_84);
    if (local_14 != 0) {
      if (param_5[3] <= *param_5) {
        return;
      }
      if (param_5[4] <= param_5[1]) {
        return;
      }
      if (param_5[5] <= param_5[2]) {
        return;
      }
      local_3c = param_5[3] - *param_5;
      uVar3 = param_5[4] - param_5[1];
      local_18 = 0;
      if (uVar3 == 0) {
        return;
      }
      local_28 = 0x400;
      local_44 = uVar3;
      local_40 = local_3c;
      do {
        local_8 = 0;
        uVar4 = uVar3 - local_18;
        if (0x400 < uVar3 - local_18) {
          uVar4 = local_28;
        }
        local_24 = local_18 + uVar4;
        local_38 = uVar4;
        if (local_3c != 0) {
          do {
            local_3c = local_3c - local_8;
            if (0x400 < local_3c) {
              local_3c = 0x400;
            }
            local_20 = local_3c + local_8;
            piVar1 = *(int **)(*(int *)((int)this + 0x44) + 4);
            iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,local_14,0,2,0,&local_68);
            if (-1 < iVar2) {
              iVar2 = *(int *)((int)this + 0x1c);
              if (*(uint *)(&DAT_10062820 + iVar2 * 4) < 8) {
                uVar3 = *(uint *)(&DAT_10062920 + iVar2 * 4);
              }
              else {
                uVar3 = *(uint *)(&DAT_10062820 + iVar2 * 4) >> 3;
              }
              local_2c = local_8 / (byte)(&DAT_10062990)[iVar2];
              local_1c = local_18 / (byte)(&DAT_100629ac)[iVar2];
              local_c = local_20 / (byte)(&DAT_10062990)[iVar2];
              local_30 = local_24 / (byte)(&DAT_100629ac)[iVar2] - local_1c;
              local_10 = 0;
              if (local_30 != 0) {
                uVar6 = 0;
                iVar2 = local_c - local_2c;
                iVar5 = local_2c * uVar3;
                do {
                  FUN_10060d80((undefined4 *)(local_64 * uVar6 + local_68),
                               (undefined4 *)((uVar6 + local_1c) * param_7 + iVar5 + param_6),
                               iVar2 * uVar3);
                  uVar6 = uVar6 + 1;
                  uVar4 = local_38;
                  this = local_34;
                } while (uVar6 < local_30);
              }
              piVar1 = *(int **)(*(int *)((int)this + 0x44) + 4);
              (**(code **)(*piVar1 + 0x3c))(piVar1,local_14,0);
              local_50 = local_3c;
              local_5c = 0;
              local_58 = 0;
              local_54 = 0;
              local_48 = 1;
              piVar1 = *(int **)(*(int *)((int)this + 0x44) + 4);
              local_4c = uVar4;
              (**(code **)(*piVar1 + 0xb8))
                        (piVar1,param_3,param_4,*param_5 + local_8,param_5[1] + local_18,0,local_14,
                         0,&local_5c);
            }
            local_8 = local_20;
            local_3c = local_40;
            uVar3 = local_44;
          } while (local_20 < local_40);
        }
        local_18 = local_24;
      } while (local_24 < uVar3);
      return;
    }
  }
  piVar1 = *(int **)(*(int *)((int)this + 0x44) + 4);
  (**(code **)(*piVar1 + 0xc0))
            (piVar1,*(undefined4 *)((int)this + 0x54),param_4,param_5,param_6,param_7,0);
  return;
}

