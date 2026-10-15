/*
 * FUN_1800af3d4 at 1800af3d4
 * bool __fastcall FUN_1800af3d4(ulonglong param_1, int param_2, int param_3, undefined8 * param_4, byte param_5, byte param_6)
 * Address ranges: 1800af3d4-1800af4b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800af3d4(ulonglong param_1,int param_2,int param_3,undefined8 *param_4,byte param_5,
                  byte param_6)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  uVar4 = param_1;
  lVar3 = FUN_1800acdf0(-(ulonglong)(*(longlong *)(param_1 + 0x18) != 0) &
                        *(longlong *)(param_1 + 0x18) - 0x6838U,
                        -(ulonglong)(param_1 != 0) & param_1 + 0x98,param_1,0,param_4,param_3,
                        param_2,*(undefined4 *)(param_1 + 0x78),*(byte *)(param_1 + 0x88),param_5,
                        *(int *)(param_1 + 0x74) == 0x14,*(undefined8 *)(param_1 + 0x50),
                        *(undefined8 *)(param_1 + 0x58),param_6);
  *(longlong *)(param_1 + 0xb0 + (ulonglong)(uint)(param_2 * 0x10 + param_3) * 8) = lVar3;
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
    cVar2 = FUN_1800148d4(lVar3,(ulonglong *)0x0,uVar4,uVar5);
    if (cVar2 != '\0') {
      piVar1 = (int *)(*(longlong *)(lVar3 + 8) + 0x104);
      *piVar1 = *piVar1 + 1;
      LOCK();
      *(int *)(lVar3 + 0xac) = *(int *)(lVar3 + 0xac) + 1;
      UNLOCK();
    }
  }
  return lVar3 != 0;
}

