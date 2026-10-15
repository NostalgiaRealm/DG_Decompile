/*
 * FUN_1003dbaa at 1003dbaa
 * undefined __thiscall FUN_1003dbaa(void * this, uint param_1)
 * Address ranges: 1003dbaa-1003dc49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003dbaa(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  iVar1 = *(int *)(*(int *)((int)this + 0x214) + param_1 * 4);
  local_c = *(uint *)(iVar1 + 0xa50);
  while( true ) {
    uVar4 = 0;
    if (local_c != 0) {
      for (; (local_c >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    if (local_c != 0) goto LAB_1003dc29;
    local_8 = local_8 + 0x20;
    if (7 < local_8) break;
    local_c = *(uint *)(iVar1 + 0xa50 + (local_8 >> 5) * 4);
  }
LAB_1003dc3a:
  FUN_100068fb(this,param_1);
  return;
LAB_1003dc29:
  while( true ) {
    pbVar3 = (byte *)((int)&local_c + ((int)uVar4 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar4 & 7));
    uVar5 = local_8;
    if (uVar4 + local_8 == -1) break;
    piVar2 = *(int **)(iVar1 + 0x9fc + (uVar4 + local_8) * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    uVar4 = 0;
    if (local_c != 0) {
      for (; (local_c >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    if (local_c == 0) {
      do {
        uVar5 = uVar5 + 0x20;
        local_8 = uVar5;
        if (7 < uVar5) goto LAB_1003dc3a;
        local_c = ((uint *)(iVar1 + 0xa50))[uVar5 >> 5];
        uVar4 = 0;
        if (local_c != 0) {
          for (; (local_c >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
      } while (local_c == 0);
    }
  }
  goto LAB_1003dc3a;
}

