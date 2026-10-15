/*
 * FUN_1002c5b4 at 1002c5b4
 * undefined4 __thiscall FUN_1002c5b4(void * this, byte * param_1)
 * Address ranges: 1002c5b4-1002c635
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002c5b4(void *this,byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  LPCSTR lpMultiByteStr;
  uint uVar4;
  byte *pbVar5;
  
  uVar4 = 0;
  iVar1 = (**(code **)(**(int **)this + 0x1c))(param_1);
  uVar3 = 0;
  if (iVar1 != 0) {
    do {
      pbVar5 = param_1;
      pbVar2 = (byte *)(**(code **)(**(int **)this + 0x20))(param_1,uVar4,"datafolderredirection");
      iVar1 = FUN_1005231b(pbVar2,pbVar5);
      if ((iVar1 == 0) && (iVar1 = (**(code **)(**(int **)this + 0x24))(param_1,uVar4), iVar1 == 1))
      {
        lpMultiByteStr = (LPCSTR)(**(code **)(**(int **)this + 0x28))(param_1,uVar4,0);
        if ((lpMultiByteStr != (LPCSTR)0x0) && (*lpMultiByteStr != '\0')) {
          lpMultiByteStr =
               (LPCSTR)MultiByteToWideChar(0,0,lpMultiByteStr,-1,*(LPWSTR *)((int)this + 4),
                                           *(int *)((int)this + 8));
        }
        return CONCAT31((int3)((uint)lpMultiByteStr >> 8),1);
      }
      uVar4 = uVar4 + 1;
      uVar3 = (**(code **)(**(int **)this + 0x1c))(param_1);
    } while (uVar4 < uVar3);
  }
  return uVar3 & 0xffffff00;
}

