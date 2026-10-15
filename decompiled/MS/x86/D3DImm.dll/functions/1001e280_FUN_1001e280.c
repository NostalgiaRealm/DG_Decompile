/*
 * FUN_1001e280 at 1001e280
 * undefined4 __thiscall FUN_1001e280(void * this, byte param_1)
 * Address ranges: 1001e280-1001e478
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1001e280(void *this,byte param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  undefined4 in_EAX;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  undefined4 uStack_c;
  
  bVar5 = *(byte *)((int)this + 0x21db) | param_1;
  uVar6 = CONCAT31((int3)((uint)in_EAX >> 8),bVar5);
  *(byte *)((int)this + 0x21db) = bVar5;
  if ((*(uint *)((int)this + 0x990) & 0x7800) != 0) {
    if (*(char *)((int)this + 0x1d42) != '\0') {
      while( true ) {
        uVar6 = 0;
        bVar9 = *(uint *)((int)this + 0x1d44) == 0;
        if (!bVar9) {
          for (; (*(uint *)((int)this + 0x1d44) >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        if (bVar9) break;
        pbVar4 = (byte *)((int)this + ((int)uVar6 >> 3) + 0x1d44);
        *pbVar4 = *pbVar4 & ~('\x01' << (uVar6 & 7));
        uVar6 = uVar6 & 0xff;
        if (7 < uVar6) break;
        FUN_10013929((float *)((int)this + uVar6 * 0x40 + 0x1920),
                     (undefined4 *)((int)this + uVar6 * 0x40 + 0x1b20),'\x01');
      }
    }
    bVar5 = *(byte *)((int)this + 0x1d42);
    if ((bVar5 != 0) || (*(char *)((int)this + 0x21db) != '\0')) {
      pvVar1 = *(void **)((int)this + 0x1d80);
      lVar10 = FUN_1001d1a0(this,pvVar1,(undefined4 *)((int)this + 0x1920),0x400,bVar5);
      uStack_c = (undefined4)lVar10;
      if (lVar10 == 0) {
        iVar2 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
        uVar6 = *(uint *)(iVar2 + 0x944);
        if ((*(uint *)(iVar2 + 0x93c) < uVar6) ||
           ((*(uint *)(iVar2 + 0x93c) <= uVar6 &&
            (*(uint *)(iVar2 + 0x938) <= *(uint *)(iVar2 + 0x940))))) {
          lVar10 = 0;
          uStack_c = 0;
        }
        else {
          FUN_10054c79(*(void **)(*(int *)((int)this + 0x1d54) + 0x1300),*(uint *)(iVar2 + 0x940),
                       uVar6);
          lVar10 = FUN_1001d1a0(this,pvVar1,(undefined4 *)((int)this + 0x1920),0x400,bVar5);
          uStack_c = (undefined4)lVar10;
        }
        *(longlong *)((int)this + 0x1e78) = lVar10;
        if (lVar10 == 0) {
          *(undefined1 *)((int)this + 0x1d42) = 1;
          *(byte *)((int)this + 0x21db) = *(byte *)((int)this + 0x21db) & 1;
          return 0;
        }
      }
      else {
        *(longlong *)((int)this + 0x1e78) = lVar10;
      }
      iVar8 = (int)((ulonglong)lVar10 >> 0x20);
      *(undefined1 *)((int)this + 0x1d42) = 0;
      *(undefined1 *)((int)this + 0x21db) = 0;
      iVar2 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
      if (((int)lVar10 == *(int *)(iVar2 + 0x48)) && (iVar8 == *(int *)(iVar2 + 0x4c))) {
        return CONCAT31((int3)((uint)*(int *)((int)this + 0x1d54) >> 8),1);
      }
      iVar3 = *(int *)(iVar2 + 0x628);
      *(int *)(iVar2 + 0x628) = iVar3 + 1;
      if ((iVar3 == 0) &&
         ((*(int *)(iVar2 + 0x8e0) != 0 && (uVar6 = 0, *(int *)(iVar2 + 0x958) != 0)))) {
        do {
          (**(code **)**(undefined4 **)(*(int *)(iVar2 + 0x954) + uVar6 * 4))();
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(iVar2 + 0x958));
      }
      uVar7 = (**(code **)(**(int **)(iVar2 + 0x638) + 0x98))
                        (*(int **)(iVar2 + 0x638),2,uStack_c,iVar8);
      *(undefined4 *)(iVar2 + 0x48) = uStack_c;
      *(int *)(iVar2 + 0x4c) = iVar8;
      return CONCAT31((int3)((uint)uVar7 >> 8),1);
    }
  }
  return CONCAT31((int3)(uVar6 >> 8),1);
}

