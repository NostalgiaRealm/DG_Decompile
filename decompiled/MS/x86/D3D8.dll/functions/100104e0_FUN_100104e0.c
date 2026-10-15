/*
 * FUN_100104e0 at 100104e0
 * undefined4 __thiscall FUN_100104e0(void * this, int param_1)
 * Address ranges: 100104e0-100105f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100104e0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint in_EAX;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  int local_314 [192];
  uint local_14;
  void *local_10;
  uint local_c;
  void *local_8;
  
  if (*(char *)((int)this + 0x6d) == '\0') {
    uVar6 = in_EAX & 0xffffff00;
  }
  else {
    local_8 = (void *)(uint)*(ushort *)((int)this + 0x30);
    local_10 = this;
    FUN_100ada8e(local_314,0,0x300);
    pvVar3 = local_8;
    uVar6 = *(uint *)((int)this + 100);
    local_c = 0;
    local_14 = uVar6;
    if (uVar6 != 0) {
      do {
        pvVar7 = (void *)0x0;
        if (pvVar3 != (void *)0x0) {
          iVar8 = local_c * 0x40;
          local_8 = (void *)(local_c * (int)pvVar3 * 8);
          do {
            iVar1 = (int)pvVar7 * 4;
            iVar2 = (int)local_8 + (int)pvVar7 * 8;
            pvVar7 = (void *)((int)pvVar7 + 1);
            iVar1 = *(int *)(*(int *)(param_1 + iVar8 + iVar1) + 4);
            *(undefined4 *)((int)local_314 + iVar2) = *(undefined4 *)(iVar1 + 0x20);
            *(undefined4 *)((int)local_314 + iVar2 + 4) = *(undefined4 *)(iVar1 + 0x10);
            uVar6 = local_14;
          } while (pvVar7 < pvVar3);
        }
        this = local_10;
        local_c = local_c + 1;
      } while (local_c < uVar6);
      local_8 = (void *)0x0;
      do {
        local_c = 0;
        if (*(short *)((int)this + 0x30) != 0) {
          iVar8 = (int)local_8 * 0x40;
          local_10 = local_8;
          do {
            pvVar3 = *(void **)(*(int *)(param_1 + iVar8 + local_c * 4) + 4);
            FUN_1002673e(pvVar3);
            FUN_100260d7((undefined4 *)((int)pvVar3 + 0x4c));
            local_c = local_c + 1;
          } while (local_c < *(ushort *)((int)this + 0x30));
        }
        local_8 = (void *)((int)local_8 + 1);
      } while (local_8 < *(void **)((int)this + 100));
    }
    piVar4 = local_314;
    if (local_314[0] == 0) {
      piVar4 = (int *)0x0;
    }
    uVar5 = (**(code **)(**(int **)((int)this + 0x44) + 0x48))(piVar4);
    *(undefined1 *)((int)this + 0x6d) = 0;
    uVar6 = CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  return uVar6;
}

