/*
 * FUN_1003faf3 at 1003faf3
 * undefined4 __thiscall FUN_1003faf3(void * this, undefined4 param_1, int param_2)
 * Address ranges: 1003faf3-1003fbd9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003faf3(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  BOOL BVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  local_c = &local_10;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_10 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_10 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  uVar4 = 0x80070057;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x84) != 0)) {
    uVar4 = 0x88760082;
    uVar3 = 0;
    if (*(uint *)((int)this + 0x1528) != 0) {
      do {
        if (*(int *)(*(int *)((int)this + 0x1524) + uVar3 * 8) == param_2) {
          *(undefined4 *)(param_2 + 0x84) = 0;
          piVar1 = *(int **)(*(int *)((int)this + 0x1524) + 4 + uVar3 * 8);
          (**(code **)(*piVar1 + 8))(piVar1);
          FUN_100428cc((void *)((int)this + 0x1524),uVar3);
          uVar4 = 0;
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)this + 0x1528));
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar4;
}

