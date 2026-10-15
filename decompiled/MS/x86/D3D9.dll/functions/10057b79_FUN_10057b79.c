/*
 * FUN_10057b79 at 10057b79
 * undefined __thiscall FUN_10057b79(void * this, int param_1, int param_2, uint param_3)
 * Address ranges: 10057b79-10057dbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10057b79(void *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint local_20;
  undefined4 uStack_c;
  
  if ((param_1 != 0) && (*(char *)(*(int *)(param_1 + 4) + 0x4a6c) == '\x03')) {
    if (*(char *)(*(int *)(param_1 + 4) + 0x4885) != '\0') {
      uVar4 = 0;
      do {
        cVar1 = *(char *)(param_1 + 0x14 + uVar4);
        if (cVar1 < '\0') {
          iVar3 = 0xd;
        }
        else {
          iVar3 = cVar1 + 2;
        }
        uVar2 = uVar4 + 1;
        *(int *)((int)this + uVar4 * 0x10 + 0x5330) = iVar3;
        uVar4 = uVar2;
      } while (uVar2 < 0xc);
      *(undefined1 *)((int)this + 0xf694) = 1;
    }
    if (param_3 < 0x300) {
      iVar3 = *(int *)(param_1 + 100);
    }
    else {
      iVar3 = 0;
    }
    if (*(int *)((int)this + 0x53f0) != iVar3) {
      *(int *)((int)this + 0x53f0) = iVar3;
      *(undefined1 *)((int)this + 0xf694) = 1;
    }
  }
  if (param_3 < 0x300) {
    uStack_c = 0;
  }
  else {
    uStack_c = 0x80000000;
  }
  *(undefined4 *)((int)this + 0xe80) = 0;
  *(undefined4 *)((int)this + 0xe84) = uStack_c;
  if (0x2ff < param_3) {
    if ((param_1 == 0) || (iVar3 = *(int *)(param_1 + 4), *(char *)(iVar3 + 0x4a6c) != '\x03')) {
      uVar4 = 0;
      do {
        if ((*(char *)(uVar4 + param_2) != '\0') && (*(int *)(param_2 + 0x118 + uVar4 * 4) != -1)) {
          *(undefined4 *)((int)this + uVar4 * 0x10 + 0x634c) = 0;
          uVar2 = *(uint *)(param_2 + 0x118 + uVar4 * 4);
          local_20 = 0;
          do {
            if (uVar2 == ((&DAT_100d5b98)[local_20] |
                         CONCAT13(-((char)(uVar2 >> 0x18) == -1),
                                  CONCAT12(-((char)(uVar2 >> 0x10) == -1),
                                           CONCAT11(-((char)(uVar2 >> 8) == -1),-((char)uVar2 == -1)
                                                   ))))) {
              lVar5 = __allshl((byte)(uVar4 << 2),(int)local_20 >> 0x1f);
              *(uint *)((int)this + 0xe80) = *(uint *)((int)this + 0xe80) | (uint)lVar5;
              *(uint *)((int)this + 0xe84) =
                   *(uint *)((int)this + 0xe84) | (uint)((ulonglong)lVar5 >> 0x20);
              *(uint *)((int)this + uVar4 * 0x10 + 0x634c) = local_20 - 1;
              break;
            }
            local_20 = local_20 + 1;
          } while (local_20 < 0xc);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 10);
    }
    else {
      uVar4 = 0;
      do {
        *(undefined4 *)((int)this + uVar4 * 0x10 + 0x634c) = 0;
        if ((*(char *)(uVar4 + param_2) != '\0') &&
           (uVar2 = *(uint *)(param_2 + 0x118 + uVar4 * 4), uVar2 != 0xffffffff)) {
          local_20 = 0;
          do {
            if ((*(uint *)(iVar3 + 0x4850 + local_20 * 4) |
                CONCAT13(-((char)(uVar2 >> 0x18) == -1),
                         CONCAT12(-((char)(uVar2 >> 0x10) == -1),
                                  CONCAT11(-((char)(uVar2 >> 8) == -1),-((char)uVar2 == -1))))) ==
                uVar2) {
              lVar5 = __allshl((byte)(uVar4 << 2),*(char *)(param_1 + 0x14 + local_20) + 1 >> 0x1f);
              *(uint *)((int)this + 0xe80) = *(uint *)((int)this + 0xe80) | (uint)lVar5;
              *(uint *)((int)this + 0xe84) =
                   *(uint *)((int)this + 0xe84) | (uint)((ulonglong)lVar5 >> 0x20);
              *(int *)((int)this + uVar4 * 0x10 + 0x634c) =
                   (int)*(char *)(param_1 + 0x14 + local_20);
              break;
            }
            local_20 = local_20 + 1;
          } while (local_20 < 0xc);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 10);
    }
    if (*(char *)(param_2 + 0x147) != '\0') {
      *(undefined1 *)((int)this + 0xf697) = 1;
    }
  }
  return;
}

