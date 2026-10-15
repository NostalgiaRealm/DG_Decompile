/*
 * FUN_1003e1d0 at 1003e1d0
 * undefined1 __thiscall FUN_1003e1d0(void * this, byte param_1)
 * Address ranges: 1003e1d0-1003e336
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_1003e1d0(void *this,byte param_1)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  undefined1 uStack00000007;
  
  *(byte *)((int)this + 0xfda5) = *(byte *)((int)this + 0xfda5) | param_1;
  if ((*(uint *)((int)this + 0x6920) & 0xf800) != 0) {
    if (*(char *)((int)this + 0xf672) != '\0') {
      uVar5 = 0;
      do {
        puVar1 = (uint *)((int)this + uVar5 * 4 + 0xf674);
        uVar3 = 0;
        bVar6 = *puVar1 != 0;
        if (bVar6) {
          for (; (*puVar1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        if (bVar6) {
          pbVar2 = (byte *)((int)this + ((int)uVar3 >> 3) + uVar5 * 4 + 0xf674);
          *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
          while (iVar4 = (uVar3 & 0xff) + uVar5 * 0x20, iVar4 < 0x100) {
            iVar4 = iVar4 * 0x40;
            FUN_10028b85((float *)((int)this + iVar4 + 0x7650),
                         (undefined4 *)((int)this + iVar4 + 0xb650),'\x01');
            puVar1 = (uint *)((int)this + uVar5 * 4 + 0xf674);
            uVar3 = 0;
            bVar6 = *puVar1 == 0;
            if (!bVar6) {
              for (; (*puVar1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
              }
            }
            if (bVar6) break;
            pbVar2 = (byte *)((int)this + ((int)uVar3 >> 3) + uVar5 * 4 + 0xf674);
            *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 8);
    }
    if ((*(byte *)((int)this + 0xf672) != 0) || (*(char *)((int)this + 0xfda5) != '\0')) {
      lVar7 = FUN_1003cc20(this,*(void **)((int)this + 0xf6e4),(undefined4 *)((int)this + 0x7650),
                           0x8000,*(byte *)((int)this + 0xf672));
      *(longlong *)((int)this + 0xf888) = lVar7;
      if (lVar7 == 0) {
        *(undefined1 *)((int)this + 0xf672) = 1;
        *(byte *)((int)this + 0xfda5) = *(byte *)((int)this + 0xfda5) & 1;
        return 0;
      }
      *(undefined1 *)((int)this + 0xf672) = 0;
      *(undefined1 *)((int)this + 0xfda5) = 0;
      uStack00000007 = 1;
      iVar4 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x1304);
      if (((int)lVar7 == *(int *)(iVar4 + 0x48)) &&
         ((int)((ulonglong)lVar7 >> 0x20) == *(int *)(iVar4 + 0x4c))) {
        return 1;
      }
      FUN_100ba94f(iVar4);
      (**(code **)(**(int **)(iVar4 + 0x638) + 0x98))(*(int **)(iVar4 + 0x638),2,lVar7);
      *(longlong *)(iVar4 + 0x48) = lVar7;
      return uStack00000007;
    }
  }
  return 1;
}

