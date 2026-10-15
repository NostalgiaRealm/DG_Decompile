/*
 * FUN_10033360 at 10033360
 * undefined1 __thiscall FUN_10033360(void * this, byte param_1)
 * Address ranges: 10033360-100334c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10033360(void *this,byte param_1)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  undefined1 uStack00000007;
  
  *(byte *)((int)this + 0xde65) = *(byte *)((int)this + 0xde65) | param_1;
  if ((*(uint *)((int)this + 0x4cb0) & 0xf800) != 0) {
    if (*(char *)((int)this + 0xd982) != '\0') {
      uVar5 = 0;
      do {
        puVar1 = (uint *)((int)this + uVar5 * 4 + 0xd984);
        uVar3 = 0;
        bVar6 = *puVar1 != 0;
        if (bVar6) {
          for (; (*puVar1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        if (bVar6) {
          pbVar2 = (byte *)((int)this + ((int)uVar3 >> 3) + uVar5 * 4 + 0xd984);
          *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
          while (iVar4 = (uVar3 & 0xff) + uVar5 * 0x20, iVar4 < 0x100) {
            iVar4 = iVar4 * 0x40;
            FUN_100214ed((float *)((int)this + iVar4 + 0x5964),
                         (undefined4 *)((int)this + iVar4 + 0x9964),'\x01');
            puVar1 = (uint *)((int)this + uVar5 * 4 + 0xd984);
            uVar3 = 0;
            bVar6 = *puVar1 == 0;
            if (!bVar6) {
              for (; (*puVar1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
              }
            }
            if (bVar6) break;
            pbVar2 = (byte *)((int)this + ((int)uVar3 >> 3) + uVar5 * 4 + 0xd984);
            *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 8);
    }
    if ((*(byte *)((int)this + 0xd982) != 0) || (*(char *)((int)this + 0xde65) != '\0')) {
      lVar7 = FUN_100322e0(this,*(void **)((int)this + 0xd9e4),(undefined4 *)((int)this + 0x5964),
                           0x8000,*(byte *)((int)this + 0xd982));
      *(longlong *)((int)this + 0xdaf0) = lVar7;
      if (lVar7 == 0) {
        *(undefined1 *)((int)this + 0xd982) = 1;
        *(byte *)((int)this + 0xde65) = *(byte *)((int)this + 0xde65) & 1;
        return 0;
      }
      *(undefined1 *)((int)this + 0xd982) = 0;
      *(undefined1 *)((int)this + 0xde65) = 0;
      uStack00000007 = 1;
      iVar4 = *(int *)(*(int *)((int)this + 0xd9b8) + 0x1304);
      if (((int)lVar7 == *(int *)(iVar4 + 0x48)) &&
         ((int)((ulonglong)lVar7 >> 0x20) == *(int *)(iVar4 + 0x4c))) {
        return 1;
      }
      FUN_10098377(iVar4);
      (**(code **)(**(int **)(iVar4 + 0x638) + 0x98))(*(int **)(iVar4 + 0x638),2,lVar7);
      *(longlong *)(iVar4 + 0x48) = lVar7;
      return uStack00000007;
    }
  }
  return 1;
}

