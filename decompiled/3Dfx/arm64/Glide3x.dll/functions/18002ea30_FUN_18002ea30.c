/*
 * FUN_18002ea30 at 18002ea30
 * undefined __cdecl FUN_18002ea30(longlong * param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 * Address ranges: 18002ea30-18002eb6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ea30(longlong *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined4 *)(param_1 + (longlong)(int)param_2 * 0x34 + 0x5b3) = param_7;
  *(undefined4 *)(param_1 + (longlong)(int)param_2 * 0x34 + 0x5b2) = param_3;
  *(undefined4 *)((longlong)param_1 + (longlong)(int)param_2 * 0x1a0 + 0x2d94) = param_4;
  *(undefined4 *)(param_1 + (longlong)(int)param_2 * 0x34 + 0x5b4) = param_5;
  *(undefined4 *)((longlong)param_1 + (longlong)(int)param_2 * 0x1a0 + 0x2da4) = param_6;
  uVar1 = *(uint *)((longlong)param_1 + (ulonglong)param_2 * 0x1a0 + 0x2d94);
  *(undefined4 *)(param_1 + (longlong)(int)param_2 * 0x34 + 0x5b5) = param_8;
  if ((((uVar1 & 7) - 1 & 0xfffffffd) == 0) ||
     (bVar4 = 0,
     ((*(uint *)((longlong)param_1 + (ulonglong)param_2 * 0x1a0 + 0x2da4) & 7) - 1 & 0xfffffffd) ==
     0)) {
    bVar4 = 1;
  }
  if (*(uint *)(param_1 + (ulonglong)param_2 * 0x34 + 0x5b2) < 0xb) {
    bVar2 = (&DAT_180067920)[*(uint *)(param_1 + (ulonglong)param_2 * 0x34 + 0x5b2)];
  }
  else {
    bVar2 = 0;
  }
  if (*(uint *)(param_1 + (ulonglong)param_2 * 0x34 + 0x5b4) < 0xb) {
    bVar3 = (&DAT_180067920)[*(uint *)(param_1 + (ulonglong)param_2 * 0x34 + 0x5b4)];
  }
  else {
    bVar3 = 0;
  }
  *(byte *)((longlong)param_1 + (ulonglong)param_2 + 0x32f9) = bVar2 | bVar4 | bVar3;
  uVar1 = *(uint *)(param_1 + (ulonglong)param_2 * 0x34 + 0x5bb);
  if (((uVar1 >> 2 & 1) != 0) && ((uVar1 & 1) == 0)) {
    *(uint *)(param_1 + (ulonglong)param_2 * 0x34 + 0x5bb) = uVar1 & 0xfffffffd;
    if ((*(int *)((longlong)param_1 + (ulonglong)param_2 * 0x1a0 + 0x2d94) == 0xd) ||
       (*(int *)((longlong)param_1 + (ulonglong)param_2 * 0x1a0 + 0x2da4) == 0xd)) {
      *(uint *)(param_1 + (ulonglong)param_2 * 0x34 + 0x5bb) = uVar1 & 0xfffffffd | 2;
    }
  }
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

