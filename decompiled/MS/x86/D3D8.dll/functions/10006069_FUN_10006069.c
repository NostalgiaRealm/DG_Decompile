/*
 * FUN_10006069 at 10006069
 * undefined __thiscall FUN_10006069(void * this, uint param_1)
 * Address ranges: 10006069-10006196
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006069(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  iVar1 = *(int *)(*(int *)((int)this + 0x210) + param_1 * 4);
  local_c = *(uint *)(iVar1 + 0x9390);
  while( true ) {
    uVar4 = 0;
    if (local_c != 0) {
      for (; (local_c >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    if (local_c != 0) goto LAB_100060e7;
    local_8 = local_8 + 0x20;
    if (7 < local_8) break;
    local_c = *(uint *)(iVar1 + 0x9390 + (local_8 >> 5) * 4);
  }
LAB_100060f7:
  local_c = *(uint *)(iVar1 + 0x939c);
  local_8 = 0;
  while( true ) {
    uVar4 = 0;
    if (local_c != 0) {
      for (; (local_c >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    if (local_c != 0) goto LAB_1000615e;
    local_8 = local_8 + 0x20;
    if (0xf < local_8) break;
    local_c = *(uint *)(iVar1 + 0x939c + (local_8 >> 5) * 4);
  }
LAB_1000616e:
  if ((*(char *)(iVar1 + 0x93a2) != '\0') && (*(int **)(iVar1 + 0x926c) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar1 + 0x926c) + 8))();
  }
  FUN_1001448a(this,param_1);
  return;
LAB_100060e7:
  while( true ) {
    pbVar3 = (byte *)((int)&local_c + ((int)uVar4 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar4 & 7));
    uVar5 = local_8;
    if (uVar4 + local_8 == -1) break;
    piVar2 = *(int **)(iVar1 + 0x49b4 + (uVar4 + local_8) * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
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
        if (7 < uVar5) goto LAB_100060f7;
        local_c = ((uint *)(iVar1 + 0x9390))[uVar5 >> 5];
        uVar4 = 0;
        if (local_c != 0) {
          for (; (local_c >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
      } while (local_c == 0);
    }
  }
  goto LAB_100060f7;
LAB_1000615e:
  while( true ) {
    pbVar3 = (byte *)((int)&local_c + ((int)uVar4 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar4 & 7));
    uVar5 = local_8;
    if (uVar4 + local_8 == -1) break;
    piVar2 = *(int **)(iVar1 + 0x9270 + (uVar4 + local_8) * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))();
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
        if (0xf < uVar5) goto LAB_1000616e;
        local_c = ((uint *)(iVar1 + 0x939c))[uVar5 >> 5];
        uVar4 = 0;
        if (local_c != 0) {
          for (; (local_c >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
      } while (local_c == 0);
    }
  }
  goto LAB_1000616e;
}

