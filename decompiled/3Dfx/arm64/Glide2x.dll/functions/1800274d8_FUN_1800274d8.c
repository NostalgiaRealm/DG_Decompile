/*
 * FUN_1800274d8 at 1800274d8
 * undefined __cdecl FUN_1800274d8(longlong param_1, char param_2, byte param_3)
 * Address ranges: 1800274d8-1800274eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800274d8(longlong param_1,char param_2,byte param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong extraout_x8;
  longlong lVar4;
  uint uVar5;
  
  uVar2 = FUN_180022ca0(param_1,*(int *)(*(longlong *)(param_1 + 0x140) + 0x2984));
  uVar3 = FUN_180022ca0(uVar2,*(int *)(extraout_x8 + 0x2988));
  uVar5 = 0;
  do {
    if ((param_2 != '\0' || uVar5 == (uint)uVar2) || uVar5 == (uint)uVar3) {
      lVar4 = param_1 + (ulonglong)uVar5 * 0x170;
      if ((*(byte *)(lVar4 + 0x1e2) & 1) != 0) {
        lVar1 = param_1 + 0x148;
        if ((*(int *)(lVar4 + 0x1bc) == 0) && (*(int *)(lVar4 + 0x1c0) == 0)) {
          FUN_180026660((longlong *)param_1,(longlong *)(lVar1 + (ulonglong)uVar5 * 0x170),1,0);
          *(byte *)(lVar4 + 0x1e2) = *(byte *)(lVar4 + 0x1e2) & 0xfe;
        }
        else {
          FUN_180022ae8((longlong *)param_1,uVar5,1,0,0,*(LONG *)(lVar4 + 0x168),
                        *(LONG *)(lVar4 + 0x16c),0);
          FUN_180026660((longlong *)param_1,(longlong *)(lVar1 + (ulonglong)uVar5 * 0x170),1,0);
          FUN_180022920((longlong *)param_1,uVar5,*(uint *)(lVar4 + 0x1b4),*(int *)(lVar4 + 0x1b8),
                        *(char *)(lVar4 + 0x1dd),(uint)*(byte *)(lVar4 + 0x1e1),'\0',0,
                        *(undefined1 *)(lVar4 + 0x1df),*(undefined4 *)(lVar4 + 0x1d4),
                        *(undefined4 *)(lVar4 + 0x1d8));
          FUN_180029c60(lVar1 + (ulonglong)uVar5 * 0x170,(ulonglong)*(uint *)(lVar4 + 0x16c));
        }
      }
      *(byte *)(lVar4 + 0x1e2) = *(byte *)(lVar4 + 0x1e2) | param_3;
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 3);
  return;
}

