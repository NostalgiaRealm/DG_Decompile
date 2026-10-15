/*
 * FUN_10005593 at 10005593
 * undefined4 __thiscall FUN_10005593(void * this, int param_1, int param_2, uint param_3, void * param_4, int param_5, int param_6, int param_7, uint param_8, int param_9)
 * Address ranges: 10005593-1000585b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10005593(void *this,int param_1,int param_2,uint param_3,void *param_4,int param_5,int param_6,
            int param_7,uint param_8,int param_9)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  uint local_f0;
  int local_e0;
  undefined4 local_dc;
  int local_d8 [2];
  undefined1 auStack_d0 [204];
  
  local_f0 = 0x8876086c;
  if ((param_9 == 0) || (*(int *)(param_9 + 0x860) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if (2 < *(byte *)(*(int *)(param_9 + 0x85c) + 1)) {
      bVar10 = true;
      goto LAB_100055e1;
    }
  }
  bVar10 = false;
LAB_100055e1:
  uVar8 = MXCSR;
  if ((((*(int *)(param_7 + 4) != 4) &&
       (uVar4 = (param_2 + param_3) * *(int *)(param_7 + 0xc),
       uVar4 < *(uint *)((int)param_4 + 0x10) || uVar4 - *(uint *)((int)param_4 + 0x10) == 0)) &&
      ((*(char *)(param_7 + 0x15) == '\x04' || (bVar10)))) &&
     ((*(uint *)((int)this + 0x6650) & *(uint *)(param_6 + 0x10)) == *(uint *)(param_6 + 0x10))) {
    FUN_100cfed0(local_d8,0,0xcc);
    uVar8 = MXCSR;
    local_e0 = 0;
    local_dc = MXCSR;
    MXCSR = 0x3fc0;
    uVar4 = FUN_10014c81(param_4,0,0,&local_e0,param_8 & 0xfffffffe);
    uVar2 = local_dc;
    if (-1 < (int)uVar4) {
      bVar10 = *(int *)((int)this + 0x650) != 0;
      if (bVar1) {
        iVar9 = *(int *)(param_9 + 8);
        local_f0 = 0;
        do {
          if ((*(char *)(iVar9 + 0x10 + local_f0) != '\0') &&
             (uVar4 = 0, *(int *)(param_6 + 8) != 0)) {
            do {
              uVar5 = (uint)*(byte *)(uVar4 + 0x214 + param_6);
              iVar9 = (int)*(char *)(param_6 + 0x14 + uVar5 * 8);
              if (*(char *)(local_f0 + *(int *)(param_9 + 8)) ==
                  *(char *)(param_6 + 0x19 + uVar5 * 8)) {
                local_d8[local_f0 * 3] =
                     *(int *)(*(int *)((int)this + iVar9 * 4 + 26000) + 4) +
                     (uint)*(byte *)(param_6 + 0x17 + uVar5 * 8) * 4 +
                     *(int *)((int)this + iVar9 * 4 + 0x6610);
                auStack_d0[local_f0 * 0xc] = *(undefined1 *)(param_6 + 0x18 + uVar5 * 8);
                auStack_d0[local_f0 * 0xc + 1] = *(undefined1 *)(param_6 + 0x15 + uVar5 * 8);
                local_d8[local_f0 * 3 + 1] = *(int *)((int)this + iVar9 * 4 + 0x65d0);
                break;
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < *(uint *)(param_6 + 8));
            iVar9 = *(int *)(param_9 + 8);
          }
          local_f0 = local_f0 + 1;
        } while (local_f0 < 0x10);
        puVar6 = *(undefined4 **)(param_9 + 0x864);
        iVar9 = *(int *)(param_9 + 0x860);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = FUN_1000fb62(iVar9);
          *(undefined4 **)(param_9 + 0x864) = puVar6;
        }
        if (*(byte *)(*(int *)(param_9 + 0x85c) + 1) < 3) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(param_9 + 8) + 0x4850;
        }
        FUN_100108ff(this,iVar9,(undefined *)puVar6,*(int *)(param_9 + 8),(int)local_d8,param_5,
                     iVar7,local_e0,param_7,param_2,param_3,param_1,bVar10);
        uVar8 = uVar2;
      }
      else {
        bVar3 = FUN_1000896c(this,param_6,(int)local_d8);
        if (bVar3 != 0) {
          uVar4 = 0;
          if (bVar10) {
            uVar4 = 2;
          }
          FUN_1001acf0(this,local_d8,local_e0,param_7,
                       -(uint)(*(int *)((int)this + 0x654) != 0) & 4 | uVar4 | 1,param_2,param_3,
                       param_1,param_8 == 1);
        }
      }
      FUN_10014e0e((int)param_4);
      if (bVar10) {
        *(byte *)((int)param_4 + 100) =
             *(byte *)((int)param_4 + 100) | ~(byte)(*(uint *)((int)param_4 + 0x34) >> 5) & 1;
      }
      local_f0 = 0;
    }
  }
  MXCSR = uVar8;
  return local_f0;
}

