import os
import torch
from dotenv import load_dotenv
from transformers import AutoModelForCausalLM, AutoTokenizer

load_dotenv()
model_name = "facebook/opt-1.3b"
save_path = os.environ.get("MODEL_PATH")

model = AutoModelForCausalLM.from_pretrained(save_path)
tokenizer = AutoTokenizer.from_pretrained(save_path)

# model.save_pretrained(save_path)
# tokenizer.save_pretrained(save_path)

prompt = "Could you give me a recipe to make a brownie?"
inputs = tokenizer(prompt, return_tensors="pt")
outputs = model.generate(**inputs, max_length=200, temperature=0.8)
response = tokenizer.decode(outputs[0], skip_special_tokens=True)

print(response)
