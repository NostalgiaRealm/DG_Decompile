/*
 * FUN_10006893 at 10006893
 * undefined __thiscall FUN_10006893(void * this, int param_1)
 * Address ranges: 10006893-100068f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006893(void *this,int param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    uVar4 = (uint)*(ushort *)(iVar1 + 0x2c);
    *(undefined1 *)(iVar1 + 0x32) = 1;
    if (uVar4 != 0) {
      local_8 = uVar4;
      uVar3 = 0;
      if (uVar4 != 0) {
        for (; (*(ushort *)(iVar1 + 0x2c) >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      do {
        pbVar2 = (byte *)((int)&local_8 + ((int)uVar3 >> 3));
        *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
        if ((*(int *)(iVar1 + 0x18) == 3) || (*(int *)(iVar1 + 0x18) == 5)) {
          (**(code **)(**(int **)((int)this + 0x14) + 0x6c))
                    (uVar3 & 0xff,0,*(undefined4 *)(iVar1 + 0x44),0,0,0,0);
        }
        uVar3 = 0;
        if (local_8 != 0) {
          for (; (local_8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
      } while (local_8 != 0);
      *(uint *)((int)this + 0xa08) = *(uint *)((int)this + 0xa08) | uVar4;
    }
  }
  return;
}

