/*
 * FUN_10045fc6 at 10045fc6
 * undefined __thiscall FUN_10045fc6(void * this, uint param_1, undefined4 * param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
 * Address ranges: 10045fc6-1004621e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x100461d9) */

void __thiscall
FUN_10045fc6(void *this,uint param_1,undefined4 *param_2,int param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint local_18;
  
  if (param_1 != 0) {
    local_18 = 0;
    if (param_1 == 0) {
      return;
    }
    uVar3 = param_1;
    if (0x3f0 < param_1) {
      uVar3 = 0x3f0;
    }
    do {
      iVar1 = *(int *)((int)this + 0xf6b8);
      piVar4 = (int *)(iVar1 + 0x11c0);
      FUN_100ce620(piVar4);
      if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_100460e1:
        piVar2 = *(int **)(iVar1 + 0x12d0);
        *piVar2 = (int)param_2;
        piVar2[1] = (int)this;
        piVar2[2] = uVar3;
        piVar2[3] = param_3;
        piVar2[4] = param_4;
        piVar2[5] = param_5;
        piVar2[6] = param_6;
        piVar2[7] = param_7;
        FUN_1004624f(piVar2);
LAB_1004611e:
        *piVar4 = 0;
      }
      else {
        iVar5 = uVar3 * 0x10 + 0x20;
        puVar6 = (undefined4 *)FUN_100ce540(piVar4,iVar5);
        if (puVar6 == (undefined4 *)0x0) {
          FUN_1003971e(piVar4);
          goto LAB_100460e1;
        }
        LOCK();
        *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
        UNLOCK();
        puVar6[1] = iVar5;
        puVar6[3] = this;
        puVar6[4] = uVar3;
        puVar7 = (undefined4 *)((int)puVar6 + 0x2bU & 0xfffffffc);
        puVar6[5] = param_3;
        puVar6[6] = param_4;
        puVar6[7] = param_5;
        puVar6[8] = param_6;
        puVar6[9] = param_7;
        puVar6[2] = puVar7;
        FUN_100cff00(puVar7,param_2,uVar3 * 0x10);
        puVar7[uVar3 * 4] = 0;
        *puVar6 = FUN_1004624f;
        *(undefined4 **)(iVar1 + 0x1228 + *(int *)(iVar1 + 0x12e4) * 0x14) = puVar7 + uVar3 * 4;
        if (*(char *)(iVar1 + 0x12ed) == '\0') goto LAB_1004611e;
        *(undefined4 *)(iVar1 + 0x11c0) = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      }
      local_18 = local_18 + uVar3;
      param_2 = param_2 + uVar3 * 4;
      if (param_1 <= local_18) {
        return;
      }
    } while( true );
  }
  iVar1 = *(int *)((int)this + 0xf6b8);
  piVar4 = (int *)(iVar1 + 0x11c0);
  FUN_100ce620(piVar4);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar6 = (undefined4 *)FUN_100ce540(piVar4,0x18);
    if (puVar6 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar6[1] = 0x18;
      puVar6[2] = this;
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      puVar6[5] = param_5;
      puVar6[6] = param_6;
      puVar6[7] = param_7;
      puVar7 = (undefined4 *)((int)puVar6 + 0x23U & 0xfffffffc);
      *puVar7 = 0;
      *puVar6 = FUN_1004621f;
      piVar4[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar7;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *piVar4 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10046216;
    }
    FUN_1003971e(piVar4);
  }
  puVar6 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar6 = this;
  puVar6[1] = param_3;
  puVar6[2] = param_4;
  puVar6[3] = param_5;
  puVar6[4] = param_6;
  puVar6[5] = param_7;
  FUN_1004621f(puVar6);
LAB_10046216:
  *piVar4 = 0;
  return;
}

