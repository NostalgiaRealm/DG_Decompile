/*
 * FUN_1002af3c at 1002af3c
 * undefined4 __thiscall FUN_1002af3c(void * this, undefined4 * * * * * * param_1)
 * Address ranges: 1002af3c-1002b0a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_1002af3c(void *this,undefined4 ******param_1)

{
  uint *puVar1;
  undefined4 ******ppppppuVar2;
  BOOL BVar3;
  undefined4 *****pppppuVar4;
  undefined4 uVar5;
  ushort in_FPUControlWord;
  void *local_c;
  void **local_8;
  
  local_c = this;
  local_8 = this;
  BVar3 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar3 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar5 = 0x887601c2;
  if (*(char *)((int)this + 8) == '\0') {
    uVar5 = 0x80070057;
    if (param_1 == (undefined4 ******)0x0) {
      pppppuVar4 = (undefined4 *****)0x0;
    }
    else {
      pppppuVar4 = param_1[4];
      if ((((uint)pppppuVar4 & 0x400) != 0) && ((*(uint *)((int)this + 0x1b8) & 0x1000) == 0))
      goto LAB_1002b094;
    }
    if (((uint)pppppuVar4 & 0x303) == 0) {
      ppppppuVar2 = *(undefined4 *******)((int)this + 0x108);
      uVar5 = 0;
      if (param_1 != ppppppuVar2) {
        if (param_1 == (undefined4 ******)0x0) {
          if (ppppppuVar2 != (undefined4 ******)0x0) {
            (*(code *)(*ppppppuVar2)[2])(ppppppuVar2);
            *(undefined4 *)((int)this + 0x108) = 0;
          }
        }
        else {
          if (*(int *)((int)this + 0x1a4) != 8) {
            uVar5 = 0x88760091;
            goto LAB_1002b094;
          }
          *(undefined4 *******)((int)this + 0x108) = param_1;
          (*(code *)(*param_1)[1])(param_1);
        }
        local_8 = &local_c;
        local_c = (void *)(in_FPUControlWord | 0x80000000);
        if ((in_FPUControlWord & 0xf3f) != 0x23f) {
          local_c = (void *)(uint)in_FPUControlWord;
        }
        puVar1 = (uint *)(*(int *)((int)this + 4) + 200);
        *puVar1 = *puVar1 | 4;
        *(undefined1 *)(*(int *)((int)this + 4) + 0xaf) = 1;
        if (*(int *)((int)this + 0x108) == 0) {
          if ((*(uint *)((int)this + 0x1b8) & 0x8000) != 0) {
            FUN_1002454b(*(void **)((int)this + 0xfc),0);
          }
        }
        else {
          FUN_1002958e(*(int *)((int)this + 0x108));
        }
        if (DAT_1006c238 != (int *)0x0) {
          (**(code **)(*DAT_1006c238 + 0x24))
                    (*(undefined4 *)(*(int *)((int)this + 0xfc) + 0xc),this);
        }
      }
    }
  }
LAB_1002b094:
  LeaveCriticalSection(DAT_1006c254);
  return uVar5;
}

