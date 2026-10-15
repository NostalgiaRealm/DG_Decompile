/*
 * FUN_1001e0b0 at 1001e0b0
 * undefined1 __thiscall FUN_1001e0b0(void * this, byte param_1)
 * Address ranges: 1001e0b0-1001e278
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_1001e0b0(void *this,byte param_1)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 uStack_c;
  
  bVar5 = *(byte *)((int)this + 0x21d9) | param_1;
  bVar1 = *(byte *)((int)this + 0x1d41);
  *(byte *)((int)this + 0x21d9) = bVar5;
  if (((bVar1 == 0) && (bVar5 == 0)) ||
     (((*(uint *)((int)this + 0x21a0) | *(uint *)((int)this + 0x2178) |
       *(uint *)((int)this + 0x2150)) & 1) == 0)) {
    return 1;
  }
  pvVar2 = *(void **)((int)this + 0x1d78);
  lVar8 = FUN_1001d1a0(this,pvVar2,(undefined4 *)((int)this + 0x980),0xe90,bVar1);
  uStack_c = (undefined4)lVar8;
  if (lVar8 == 0) {
    iVar3 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
    uVar7 = *(uint *)(iVar3 + 0x944);
    if ((*(uint *)(iVar3 + 0x93c) < uVar7) ||
       ((*(uint *)(iVar3 + 0x93c) <= uVar7 && (*(uint *)(iVar3 + 0x938) <= *(uint *)(iVar3 + 0x940))
        ))) {
      lVar8 = 0;
      uStack_c = 0;
    }
    else {
      FUN_10054c79(*(void **)(*(int *)((int)this + 0x1d54) + 0x1300),*(uint *)(iVar3 + 0x940),uVar7)
      ;
      lVar8 = FUN_1001d1a0(this,pvVar2,(undefined4 *)((int)this + 0x980),0xe90,bVar1);
      uStack_c = (undefined4)lVar8;
    }
    *(longlong *)((int)this + 0x1e68) = lVar8;
    if (lVar8 == 0) {
      *(byte *)((int)this + 0x1d41) = *(byte *)((int)this + 0x1d41) & 1;
      *(byte *)((int)this + 0x21d9) = *(byte *)((int)this + 0x21d9) & 1;
      return 0;
    }
  }
  else {
    *(longlong *)((int)this + 0x1e68) = lVar8;
  }
  iVar6 = (int)((ulonglong)lVar8 >> 0x20);
  *(undefined1 *)((int)this + 0x1d41) = 0;
  *(undefined1 *)((int)this + 0x21d9) = 0;
  iVar3 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
  if (((int)lVar8 == *(int *)(iVar3 + 0x38)) && (iVar6 == *(int *)(iVar3 + 0x3c))) {
    return 1;
  }
  iVar4 = *(int *)(iVar3 + 0x628);
  *(int *)(iVar3 + 0x628) = iVar4 + 1;
  if ((iVar4 == 0) && ((*(int *)(iVar3 + 0x8e0) != 0 && (uVar7 = 0, *(int *)(iVar3 + 0x958) != 0))))
  {
    do {
      (**(code **)**(undefined4 **)(*(int *)(iVar3 + 0x954) + uVar7 * 4))();
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(iVar3 + 0x958));
  }
  (**(code **)(**(int **)(iVar3 + 0x638) + 0x98))(*(int **)(iVar3 + 0x638),0,uStack_c,iVar6);
  *(undefined4 *)(iVar3 + 0x38) = uStack_c;
  *(int *)(iVar3 + 0x3c) = iVar6;
  return 1;
}

