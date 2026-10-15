/*
 * FUN_100143dc at 100143dc
 * undefined4 __thiscall FUN_100143dc(void * this, int param_1)
 * Address ranges: 100143dc-100144f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100143dc(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint in_EAX;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int local_314 [192];
  void *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  if (*(char *)((int)this + 0x6d) == '\0') {
    uVar7 = in_EAX & 0xffffff00;
  }
  else {
    uVar7 = (uint)*(ushort *)((int)this + 0x30);
    if ((*(uint *)((int)this + 0x54) & 0x400) != 0) {
      uVar7 = 1;
    }
    local_14 = this;
    FUN_100cfed0(local_314,0,0x300);
    uVar4 = *(uint *)((int)this + 100);
    local_8 = 0;
    local_10 = uVar4;
    if (uVar4 != 0) {
      do {
        uVar9 = 0;
        if (uVar7 != 0) {
          iVar8 = local_8 * 0x40;
          local_c = local_8 * uVar7 * 8;
          do {
            iVar1 = uVar9 * 4;
            iVar2 = local_c + uVar9 * 8;
            uVar9 = uVar9 + 1;
            iVar1 = *(int *)(*(int *)(param_1 + iVar8 + iVar1) + 4);
            *(undefined4 *)((int)local_314 + iVar2) = *(undefined4 *)(iVar1 + 0x20);
            *(undefined4 *)((int)local_314 + iVar2 + 4) = *(undefined4 *)(iVar1 + 0x10);
            uVar4 = local_10;
          } while (uVar9 < uVar7);
        }
        this = local_14;
        local_8 = local_8 + 1;
      } while (local_8 < uVar4);
      uVar7 = 0;
      do {
        local_8 = 0;
        while( true ) {
          uVar4 = (uint)*(ushort *)((int)this + 0x30);
          if ((*(uint *)((int)this + 0x54) & 0x400) != 0) {
            uVar4 = 1;
          }
          if (uVar4 <= local_8) break;
          pvVar3 = *(void **)(*(int *)(uVar7 * 0x40 + param_1 + local_8 * 4) + 4);
          FUN_1002dfa1(pvVar3);
          FUN_1002d836((undefined4 *)((int)pvVar3 + 0x4c));
          local_8 = local_8 + 1;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)((int)this + 100));
    }
    piVar6 = local_314;
    if (local_314[0] == 0) {
      piVar6 = (int *)0x0;
    }
    uVar5 = (**(code **)(**(int **)((int)this + 0x44) + 0x48))(piVar6);
    *(undefined1 *)((int)this + 0x6d) = 0;
    uVar7 = CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  return uVar7;
}

