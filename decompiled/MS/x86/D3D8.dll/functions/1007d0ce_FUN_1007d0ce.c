/*
 * FUN_1007d0ce at 1007d0ce
 * undefined1 __thiscall FUN_1007d0ce(void * this, uint param_1)
 * Address ranges: 1007d0ce-1007d1ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_1007d0ce(void *this,uint param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x5944) = 0;
    *(undefined4 *)((int)this + 0x589c) = 0;
    (**(code **)(**(int **)((int)this + 0x14) + 0x90))(0);
    uVar4 = 1;
  }
  else {
    iVar3 = FUN_10080572((void *)((int)this + 0x591c),param_1);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      *(uint *)((int)this + 0x5944) = param_1;
      *(undefined4 *)((int)this + 0x589c) = *(undefined4 *)(iVar3 + 4);
      (**(code **)(**(int **)((int)this + 0x14) + 0x90))(*(undefined4 *)(iVar3 + 4));
      uVar2 = MXCSR;
      iVar9 = *(int *)(iVar3 + 8) + 0x4c;
      MXCSR = 0x3fc0;
      param_1 = 0;
      sVar1 = *(short *)(iVar3 + 0xc);
      while (sVar1 != -1) {
        uVar7 = (uint)*(ushort *)(iVar3 + 0xc + param_1 * 4);
        uVar6 = (uint)*(ushort *)(iVar3 + 0xe + param_1 * 4);
        puVar8 = (undefined4 *)(uVar7 * 0x10 + iVar9);
        puVar10 = (undefined4 *)((uVar7 + 0x533) * 0x10 + (int)this);
        for (iVar5 = (uVar6 - uVar7) * 4; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        (**(code **)(**(int **)((int)this + 0x14) + 0x98))(uVar7,uVar6,uVar7 * 0x10 + iVar9);
        param_1 = param_1 + 1;
        sVar1 = *(short *)(iVar3 + 0xc + param_1 * 4);
      }
      uVar4 = 1;
      MXCSR = uVar2;
    }
  }
  *(undefined1 *)((int)this + 0xa00) = 1;
  return uVar4;
}

