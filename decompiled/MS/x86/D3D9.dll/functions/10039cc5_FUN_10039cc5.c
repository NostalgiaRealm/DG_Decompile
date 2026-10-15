/*
 * FUN_10039cc5 at 10039cc5
 * undefined __fastcall FUN_10039cc5(int param_1)
 * Address ranges: 10039cc5-10039e19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10039cc5(int param_1)

{
  int *this;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    uVar8 = 0;
    iVar3 = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10) * 0x16c0;
    if (*(int *)(param_1 + 0x28) != 0) {
      this = (int *)(iVar3 + 0x1880);
LAB_10039cfd:
      iVar1 = *(int *)(*(int *)(param_1 + 0x24) + uVar8 * 8);
      iVar2 = *(int *)(param_1 + 8);
      FUN_100ce620(this);
      if (*(char *)(iVar3 + 0x19ac) == '\0') {
LAB_10039d8a:
        piVar7 = *(int **)(iVar3 + 0x1990);
        *piVar7 = iVar2;
        piVar7[1] = iVar1;
        FUN_10039e1a(piVar7);
LAB_10039da5:
        *this = 0;
      }
      else {
        puVar4 = (undefined4 *)FUN_100ce540(this,8);
        if (puVar4 == (undefined4 *)0x0) {
          FUN_1003971e(this);
          goto LAB_10039d8a;
        }
        LOCK();
        *(int *)(iVar3 + 0x19a8) = *(int *)(iVar3 + 0x19a8) + 1;
        UNLOCK();
        puVar4[1] = 8;
        puVar4[2] = iVar2;
        puVar4[3] = iVar1;
        puVar6 = (undefined4 *)((int)puVar4 + 0x13U & 0xfffffffc);
        *puVar6 = 0;
        *puVar4 = FUN_10039e1a;
        *(undefined4 **)(iVar3 + 0x18e8 + *(int *)(iVar3 + 0x19a4) * 0x14) = puVar6;
        if (*(char *)(iVar3 + 0x19ad) == '\0') goto LAB_10039da5;
        *this = 0;
        SetEvent(*(HANDLE *)(iVar3 + 0x18e0));
      }
      iVar1 = *(int *)(param_1 + 4);
      uVar5 = 0;
      if (*(char *)(param_1 + 0x21) == '\0') {
        piVar7 = (int *)(iVar1 + 0xd4);
        if (*(uint *)(iVar1 + 0xd8) != 0) {
          do {
            if (*(int *)(*piVar7 + uVar5 * 4) == param_1) goto LAB_10039df7;
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(iVar1 + 0xd8));
        }
      }
      else {
        piVar7 = (int *)(iVar1 + 0xe0);
        if (*(uint *)(iVar1 + 0xe4) != 0) {
          do {
            if (*(int *)(*piVar7 + uVar5 * 4) == param_1) goto LAB_10039df7;
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(iVar1 + 0xe4));
        }
      }
      goto LAB_10039e04;
    }
  }
  else {
    FUN_100398e7(param_1);
  }
  return;
LAB_10039df7:
  if (uVar5 != 0xffffffff) {
    FUN_1000868d(piVar7,uVar5);
  }
LAB_10039e04:
  uVar8 = uVar8 + 1;
  if (*(uint *)(param_1 + 0x28) <= uVar8) {
    return;
  }
  goto LAB_10039cfd;
}

