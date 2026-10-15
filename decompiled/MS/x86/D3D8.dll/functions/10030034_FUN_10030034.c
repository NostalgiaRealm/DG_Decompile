/*
 * FUN_10030034 at 10030034
 * bool __thiscall FUN_10030034(void * this, char param_1, char param_2, undefined4 * param_3)
 * Address ranges: 10030034-10030245
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10030034(void *this,char param_1,char param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  undefined4 uStack_20;
  int iStack_1c;
  
  bVar4 = true;
  *param_3 = 0;
  if (*(int *)((int)this + 0x18) != 1) {
    iVar1 = *(int *)(*(int *)((int)this + 0x24) + *(int *)((int)this + 0x34) * 8);
    if ((*(int *)(iVar1 + 0x30) != 0) || (uVar3 = FUN_1002f8e9(iVar1), (char)uVar3 == '\0')) {
      if (*(uint *)((int)this + 0x14) < 0x20001) {
        FUN_1002fad6((int)this);
        *(undefined4 *)((int)this + 0x18) = 1;
        *(undefined1 *)((int)this + 0x20) = 1;
        uVar5 = FUN_1002f9e0((int)this);
        if ((char)uVar5 != '\0') {
          (**(code **)(*(int *)(*(int *)(*(int *)((int)this + 0x24) + *(int *)((int)this + 0x34) * 8
                                        ) + 0x38) + 0x10))(local_28,2,0,0,0);
          bVar4 = iStack_1c == 0;
          *param_3 = uStack_20;
          *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
        }
      }
      else {
        FUN_1002fd6c(this,*(uint *)(*(int *)((int)this + 0x24) + *(int *)((int)this + 0x34) * 8));
      }
    }
    if (*(int *)((int)this + 0x18) == 1) {
      return bVar4;
    }
    (**(code **)(*(int *)(*(int *)(*(int *)((int)this + 0x24) + *(int *)((int)this + 0x34) * 8) +
                         0x38) + 0x10))(local_28,1,0,0,0);
    goto LAB_10030232;
  }
  if (param_1 == '\0') {
    iVar1 = *(int *)(*(int *)((int)this + 0x24) + *(int *)((int)this + 0x34) * 8);
    if (param_2 == '\0') {
      if ((*(int *)(iVar1 + 0x30) != 0) || (uVar3 = FUN_1002f8e9(iVar1), (char)uVar3 == '\0')) {
        FUN_1002fd6c(this,*(uint *)(*(int *)((int)this + 0x24) + *(int *)((int)this + 0x34) * 8));
      }
      iVar1 = *(int *)(*(int *)((int)this + 0x24) + *(int *)((int)this + 0x34) * 8);
    }
    (**(code **)(*(int *)(iVar1 + 0x38) + 0x10))(local_28,1,0,0,0);
    if (iStack_30 != 0) goto LAB_10030232;
    uVar5 = 1;
  }
  else {
    if (*(int *)((int)this + 0x28) == 0) {
      return true;
    }
    iVar1 = *(int *)((int)this + 0x24);
    if (*(int *)(*(int *)(iVar1 + *(int *)((int)this + 0x34) * 8) + 0x30) != 0) {
      if (*(int *)(*(int *)(iVar1 + *(int *)((int)this + 0x30) * 8) + 0x30) == 0) {
        *(undefined4 *)(iVar1 + 4 + *(int *)((int)this + 0x34) * 8) =
             *(undefined4 *)((int)this + 0x30);
        *(int *)((int)this + 0x34) = *(int *)((int)this + 0x30);
        *(undefined4 *)((int)this + 0x30) =
             *(undefined4 *)(*(int *)((int)this + 0x24) + 4 + *(int *)((int)this + 0x30) * 8);
      }
      else {
        if (0xc00000 < (uint)((*(int *)((int)this + 0x28) + 1) * *(int *)((int)this + 0x14))) {
          FUN_100ac680(*(int *)((int)this + 0x10) * 0x16c0 + *(int *)((int)this + 8) + 0x1880);
          goto LAB_100300d4;
        }
        FUN_1002f9e0((int)this);
      }
      *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
    }
LAB_100300d4:
    iVar1 = *(int *)(*(int *)((int)this + 0x24) + *(int *)((int)this + 0x34) * 8);
    if (*(int *)(iVar1 + 0x30) != 0) {
      return true;
    }
    (**(code **)(*(int *)(iVar1 + 0x38) + 0x10))(local_28,2,0,0,0);
    if (iStack_30 != 0) goto LAB_10030232;
    uVar5 = 2;
  }
  puVar2 = FUN_1002fcde(this,&uStack_2c,uVar5);
  uStack_34 = puVar2[2];
  iStack_30 = puVar2[3];
LAB_10030232:
  *param_3 = uStack_34;
  return iStack_30 == 0;
}

